#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>
#include <QTimer>
#include <QProcess>
#include <QDir>

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
    QTimer *timer = new QTimer(this);
    runPythonScript();
    connect(timer, &QTimer::timeout, this, &DashboardWindow::runPythonScript);
    timer->start(20000); // Run every 1000 milliseconds (1 second)
    // Debug: Initialization
    qDebug() << "Initializing DashboardWindow for user:" << QString::fromStdString(username);

    // Initialize user balance if not present
    if (MapBalance.find(username) == MapBalance.end()) {
        MapBalance[username] = {"12525", "1918", "913"}; // Default balances
        qDebug() << "No existing balance found. Setting default balances for user:" << QString::fromStdString(username);
    } else {
        qDebug() << "Existing balance found for user:" << QString::fromStdString(username)
        << ". Balances:" << QString::fromStdString(MapBalance[username][0]) << ","
        << QString::fromStdString(MapBalance[username][1]) << ","
        << QString::fromStdString(MapBalance[username][2]);
    }

    // Initialize transaction history if not present
    if (Transactions.find(username) == Transactions.end()) {
        Transactions[username] = {}; // Initialize empty transaction history
        qDebug() << "No existing transactions found. Initializing empty history for user:"
                 << QString::fromStdString(username);
    } else {
        qDebug() << "Existing transaction history found for user:" << QString::fromStdString(username);
    }

    // Set initial balance and transaction history
    ui->BalanceCard1->setText(QString::fromStdString(MapBalance[username][0] + "$"));
    if (Transactions.find(username) != Transactions.end()) {
        for (const std::string &transaction : Transactions[username]) {
            ui->listWidget->addItem(QString::fromStdString(transaction));
        }
    }
    ui->BalanceCard1->setText(QString::fromStdString(MapBalance[username][0] + "$"));
    ui->BalanceCard2_2->setText(QString::fromStdString(MapBalance[username][1] + "$"));

    ui->textEdit->setReadOnly(true);
    // Set window properties
    this->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    this->setStyleSheet("background-color: #f5f5f7;");
    ui->LabelName->setAlignment(Qt::AlignCenter);
    ui->LabelName->setText(QString::fromStdString(username));

    // Load and scale images
    this->setWindowIcon(QIcon(":/images/BankingIcon.png"));
    QPixmap map(":/images/BankingIcon.png");
    map = map.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon->setPixmap(map);
    QPixmap Map(":/images/BankSolo.png");
    Map = Map.scaled(179, 179, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon_2->setPixmap(Map);
    ui->Icon_4->setPixmap(QPixmap(":/images/Bank2.png").scaled(ui->Icon_4->size(), Qt::KeepAspectRatio));

    ui->label_15->setPixmap(QPixmap(":/images/evm.png").scaled(ui->label_15->size(), Qt::KeepAspectRatio));
    ui->label_4->setPixmap(QPixmap(":/images/evm.png").scaled(ui->label_4->size(), Qt::KeepAspectRatio));

    ui->usernameCard->setText(QString::fromStdString(username));
    ui->usernameCard_3->setText(QString::fromStdString(username));

    // Connect button signals to slots
    connect(ui->HomeButton, SIGNAL(released()), this, SLOT(HomeButtonPressed()));
    connect(ui->InfoButton, SIGNAL(released()), this, SLOT(InformationButtonPressed()));
    connect(ui->SignoutButton, SIGNAL(released()), this, SLOT(SignoutButtonPressed()));
    connect(ui->TransferButton, SIGNAL(released()), this, SLOT(TransferButtonPressed()));
    connect(ui->SendButton, SIGNAL(released()), this, SLOT(TransferMethod()));
    connect(ui->InvestButton, SIGNAL(released()),this,SLOT(InvestButtonPressed()));
}
void DashboardWindow::InvestButtonPressed(){
    qDebug() << "InvestBUttonPressed";
    ui->stackedWidget->setCurrentIndex(3);
}
void DashboardWindow::InformationButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(0);
    qDebug() << "InformationButtonPressed: Switched to Information view.";
}

void DashboardWindow::HomeButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(2);
    qDebug() << "HomeButtonPressed: Switched to Home view.";
}

void DashboardWindow::TransferButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(1);
    qDebug() << "TransferButtonPressed: Switched to Transfer view.";
}

void DashboardWindow::SignoutButtonPressed()
{
    this->hide(); // Hide the DashboardWindow instead of closing it
    if (parentWidget()) {
        parentWidget()->show(); // Show the parent MainWindow
    }
    qDebug() << "SignoutButtonPressed: User signed out.";
}

void DashboardWindow::TransferMethod()
{
    int index = ui->combobox->currentIndex();
    QString receiver = ui->WhoLineEdit->text();
    QString message = ui->message->text(); // Get the message from the input field
    std::string sender;
    int cardIndex = index;

    // Debug: Transfer initiation
    qDebug() << "TransferMethod initiated. ComboBox Index:" << index;

    if (receiver.isEmpty()) {
        qDebug() << "Receiver field is empty!";
        return;
    }

    std::string amountStr = ui->amount->text().toStdString();
    int amount = 0;
    try {
        amount = std::stoi(amountStr);
        if (amount <= 0) {
            throw std::invalid_argument("Amount must be positive");
        }
    } catch (const std::exception &e) {
        qDebug() << "Invalid amount! Error:" << e.what();
        return;
    }

    // Retrieve the sender and balance card based on the index
    if (index == 0) {
        sender = ui->usernameCard->text().toStdString();
    } else if (index == 1) {
        sender = ui->usernameCard_3->text().toStdString();
    } else {
        qDebug() << "Invalid combobox index!";
        return;
    }

    std::string receiverStr = receiver.toStdString();

    // Check if sender and receiver are the same
    if (sender == receiverStr) {
        qDebug() << "Sender and receiver cannot be the same!";
        return;
    }

    // Check if receiver exists
    if (MapBalance.find(receiverStr) == MapBalance.end()) {
        qDebug() << "Receiver not found!";
        return;
    }

    // Debug: Check sender's balance
    qDebug() << "Sender Card-" << (cardIndex + 1) << " Balance:"
             << QString::fromStdString(MapBalance[sender][cardIndex])
             << "Amount to transfer:" << amount;

    // Check sender's balance
    if (std::stoi(MapBalance[sender][cardIndex]) < amount) {
        qDebug() << "Insufficient balance!";
        return;
    }

    // Perform the transfer
    qDebug() << "Performing transfer...";
    MapBalance[sender][cardIndex] = std::to_string(std::stoi(MapBalance[sender][cardIndex]) - amount);

    // Ensure the correct card index is used for the receiver
    MapBalance[receiverStr][cardIndex] = std::to_string(std::stoi(MapBalance[receiverStr][cardIndex]) + amount);

    // Debug: After transfer
    qDebug() << "After Transfer: Sender Card-" << (cardIndex + 1) << " Balance:"
             << QString::fromStdString(MapBalance[sender][cardIndex]);

    // Check if the checkbox is checked
    bool isAnonymous = ui->checkBox->isChecked();

    QString senderName = isAnonymous ? "Anonymous" : QString::fromStdString(sender);
    QString receiverName = isAnonymous ? "Anonymous" : receiver;

    QString senderTransaction = QString("-%1 $ to %2 from Card-%3 | Msg: %4")
                                    .arg(amountStr.c_str(), receiverName, QString::number(cardIndex + 1), message);
    QString receiverTransaction = QString("+%1 $ from %2 from Card-%3 | Msg: %4")
                                      .arg(amountStr.c_str(), senderName, QString::number(cardIndex + 1), message);

    Transactions[sender].push_back(senderTransaction.toStdString());
    Transactions[receiverStr].push_back(receiverTransaction.toStdString());

    // Update sender's transaction list widget
    ui->listWidget->addItem(senderTransaction);

    // Update sender's balance UI
    if (cardIndex == 0) {
        qDebug() << "Updating UI for Card 1 Balance:" << QString::fromStdString(MapBalance[sender][0]);
        ui->BalanceCard1->setText(QString::fromStdString(MapBalance[sender][0] + " $"));
    } else if (cardIndex == 1) {
        qDebug() << "Updating UI for Card 2 Balance:" << QString::fromStdString(MapBalance[sender][1]);
        ui->BalanceCard2_2->setText(QString::fromStdString(MapBalance[sender][1] + " $"));
    }

    // Clear input fields
    ui->WhoLineEdit->clear();
    ui->amount->clear();
    ui->message->clear();

    qDebug() << "Transaction successful!";
}
void DashboardWindow::runPythonScript()
{
    // Get the directory of the executable
    QString executableDir = QCoreApplication::applicationDirPath();

    // Move up directories to access the root project directory where the Python script is located
    QDir projectRootDir(executableDir);
    projectRootDir.cdUp(); // Move out of the 'build' directory
    projectRootDir.cdUp(); // Adjust further if needed

    QString scriptPath = projectRootDir.absoluteFilePath("getBTCPrice.py");

    // Command to run the Python script
    QString command = QString("python \"%1\"").arg(scriptPath);

    qDebug() << "Executing command:" << command;

    // Create a QProcess to execute the Python script
    QProcess process;
    process.start(command);
    process.waitForFinished();

    // Read the output of the Python script
    QString output = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    if (!error.isEmpty()) {
        qDebug() << "Error from Python script:" << error;
    } else {
        qDebug() << "Output from Python script:" << output;
        ui->BitcoinPrice->setText("1 BTC: " + output.trimmed() + "$"); // Overwrite the label
    }
}
DashboardWindow::~DashboardWindow()
{
    delete ui;
    qDebug() << "DashboardWindow destroyed.";
}
