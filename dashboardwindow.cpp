#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>

DashboardWindow::DashboardWindow(const std::string username,
                                 std::map<std::string, std::vector<std::string>> &sharedMapBalance,
                                 std::map<std::string, std::vector<std::string>> &sharedTransactions,
                                 QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow)
    , MapBalance(sharedMapBalance) // Assign reference to shared balance map
    , Transactions(sharedTransactions) // Assign reference to shared transaction history
{
    ui->setupUi(this);
    // Initialize user balance if not present
    if (MapBalance.find(username) == MapBalance.end()) {
        MapBalance[username] = {"12525", "2514", "913"}; // Default balances
    }

    // Initialize transaction history if not present
    if (Transactions.find(username) == Transactions.end()) {
        Transactions[username] = {}; // Initialize empty transaction history
    }

    // Set initial balance and transaction history
    ui->BalanceCard1->setText(QString::fromStdString(MapBalance[username][0] + "$"));
    if (Transactions.find(username) != Transactions.end()) {
        for (const std::string &transaction : Transactions[username]) {
            ui->listWidget->addItem(QString::fromStdString(transaction));
        }
    }

    // Set window properties
    this->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    this->setStyleSheet("background-color: #f5f5f7;");
    ui->LabelName->setAlignment(Qt::AlignCenter);
    ui->LabelName->setText(QString::fromStdString(username));

    // Load and scale images
    QPixmap pixmap(":/profile/Profilepic.png");
    pixmap = pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label->setPixmap(pixmap);
    ui->label->setAlignment(Qt::AlignCenter);

    this->setWindowIcon(QIcon(":/images/Bank.png"));
    QPixmap map(":/images/Bank.png");
    map = map.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon->setPixmap(map);
    map = map.scaled(179, 179, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon_2->setPixmap(map);

    ui->label_4->setPixmap(QPixmap(":/images/evm.png").scaled(ui->label_4->size(), Qt::KeepAspectRatio));
    ui->usernameCard->setText(QString::fromStdString(username));

    // Connect button signals to slots
    connect(ui->HomeButton, SIGNAL(released()), this, SLOT(HomeButtonPressed()));
    connect(ui->InfoButton, SIGNAL(released()), this, SLOT(InformationButtonPressed()));
    connect(ui->SignoutButton, SIGNAL(released()), this, SLOT(SignoutButtonPressed()));
    connect(ui->TransferButton, SIGNAL(released()), this, SLOT(TransferButtonPressed()));
    connect(ui->SendButton, SIGNAL(released()), this, SLOT(TransferMethod()));
}

void DashboardWindow::InformationButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void DashboardWindow::HomeButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void DashboardWindow::TransferButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void DashboardWindow::SignoutButtonPressed()
{
    this->hide(); // Hide the DashboardWindow instead of closing it
    if (parentWidget()) {
        parentWidget()->show(); // Show the parent MainWindow
    }
}

void DashboardWindow::TransferMethod()
{
    int index = ui->combobox->currentIndex();

    QString receiver = ui->WhoLineEdit->text();
    std::string amountStr = ui->amount->text().toStdString();
    QString message = ui->message->text(); // Get the message from the input field
    if(index==0){
    // Validate receiver and amount
    if (receiver.isEmpty()) {
        qDebug() << "Receiver field is empty!";
        return;
    }

    if (amountStr.empty() || std::stoi(amountStr) <= 0) {
        qDebug() << "Invalid amount!";
        return;
    }

    // Retrieve the receiver's username as entered (case-sensitive)
    std::string receiverStr = receiver.toStdString();

    if (MapBalance.find(receiverStr) == MapBalance.end()) {
        qDebug() << "Receiver not found!";
        return;
    }

    // Check sender's balance
    std::string sender = ui->usernameCard->text().toStdString();
    if (std::stoi(MapBalance[sender][0]) < std::stoi(amountStr)) {
        qDebug() << "Insufficient balance!";
        return;
    }

    // Perform the transfer
    int amount = std::stoi(amountStr);
    MapBalance[sender][0] = std::to_string(std::stoi(MapBalance[sender][0]) - amount);
    MapBalance[receiverStr][0] = std::to_string(std::stoi(MapBalance[receiverStr][0]) + amount);

    // Update transaction history for both sender and receiver
    QString senderTransaction = QString::fromStdString("-" + amountStr + " $ to " + receiverStr) + " | Message: " + message;
    QString receiverTransaction = QString::fromStdString("+" + amountStr + " $ from " + sender) + " | Message: " + message;

    Transactions[sender].push_back(senderTransaction.toStdString());
    Transactions[receiverStr].push_back(receiverTransaction.toStdString());

    // Update sender's transaction list widget
    ui->listWidget->addItem(senderTransaction);

    // Update sender's balance
    ui->BalanceCard1->setText(QString::fromStdString(MapBalance[sender][0] + " $"));

    // Clear input fields
    ui->WhoLineEdit->clear();
    ui->amount->clear();
    ui->message->clear();

    qDebug() << "Transaction successful!";
    }
}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}
