#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>
#include <QTimer>
#include <QProcess>
#include <QDir>
#include <qmessagebox.h>

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

    invested = false;
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &DashboardWindow::runPythonScript);
    timer->start(20000); // Run every 1000 milliseconds (1 second)
    // Debug: Initialization
    qDebug() << "Initializing DashboardWindow for user:" << QString::fromStdString(username);

    // Initialize user balance if not present
    if (MapBalance.find(username) == MapBalance.end()) {
        MapBalance[username] = {"12525", "1918", "0", "0", "0"}; // Third index for cash if btc sold rn Fourth Index for cash that was invested
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
    QPixmap MAP(":/images/Bitcoin.png");
    MAP = MAP.scaled(80, 80, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->BitcoinIcon->setPixmap(MAP);


    ui->usernameCard->setText(QString::fromStdString(username));
    ui->usernameCard_3->setText(QString::fromStdString(username));

    // Connect button signals to slots
    connect(ui->HomeButton, SIGNAL(released()), this, SLOT(HomeButtonPressed()));
    connect(ui->InfoButton, SIGNAL(released()), this, SLOT(InformationButtonPressed()));
    connect(ui->SignoutButton, SIGNAL(released()), this, SLOT(SignoutButtonPressed()));
    connect(ui->TransferButton, SIGNAL(released()), this, SLOT(TransferButtonPressed()));
    connect(ui->SendButton, SIGNAL(released()), this, SLOT(TransferMethod()));
    connect(ui->InvestButton, SIGNAL(released()),this,SLOT(InvestButtonPressed()));
    connect(ui->Invest, SIGNAL(released()),this,SLOT(BuyButtonPressed()));
    connect(ui->Sell, SIGNAL(released()),this,SLOT(SellButtonPressed()));
    runPythonScript();

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
void DashboardWindow::BuyButtonPressed(){
    int InvestedCash = std::stoi(ui->lineEdit->text().toStdString());
    std::string username = ui->usernameCard->text().toStdString();

    int currentBalance = std::stoi(MapBalance[username][0]);

    if (InvestedCash <= currentBalance && !invested) {
        // Deduct the invested amount from user's balance
        int newBalance = currentBalance - InvestedCash;
        MapBalance[username][0] = std::to_string(newBalance);

        // Set value of investment
        MapBalance[username][2] = std::to_string(InvestedCash); // Current value of investment
        MapBalance[username][3] = std::to_string(InvestedCash); // Original invested amount

        // Record BTC price at time of investment
        QString priceText = ui->BitcoinPrice->text().split(":").last().remove("$").trimmed();
        MapBalance[username][4] = priceText.toStdString();

        invested = true;

        // Update balance UI
        ui->BalanceCard1->setText(QString::fromStdString(MapBalance[username][0]) + " $");

        qDebug() << "BuyButtonPressed: Investment made at BTC price:" << QString::fromStdString(MapBalance[username][4]);
        qDebug() << "BuyButtonPressed: New balance is:" << QString::fromStdString(MapBalance[username][0]);
        ui->label->setText(QString::fromStdString(std::to_string(InvestedCash) + "$"));
        ui->lineEdit->setText("");
    } else if (invested) {
        qDebug() << "BuyButtonPressed: Already invested. Ignoring.";
    } else {
        QMessageBox::warning(this, "Insufficient Funds", "You don't have enough balance to invest.");
    }
}
void DashboardWindow::SellButtonPressed(){
    std::string username = ui->usernameCard->text().toStdString();

    if (invested) {
        // Retrieve the invested amount and BTC price at the time of investment
        int investedAmount = std::stoi(MapBalance[username][2]);  // invested amount
        int currentBalance = std::stoi(MapBalance[username][0]); // Current balance in the account

        // Add the invested amount back to the balance
        int newBalance = currentBalance + investedAmount;
        MapBalance[username][0] = std::to_string(newBalance); // Update user's balance

        // Revert the investment-related data
        MapBalance[username][2] = "0";  // Reset the current value of investment
        MapBalance[username][3] = "0";  // Reset the original investment amount
        MapBalance[username][4] = "0";  // Reset the BTC price at the time of investment

        // Update the UI for the balance
        ui->BalanceCard1->setText(QString::fromStdString(MapBalance[username][0]) + " $");

        // Reset the invested flag
        invested = false;

        // Debugging logs
        qDebug() << "SellButtonPressed: Investment sold. Money returned to balance.";
        qDebug() << "New balance is: " << QString::fromStdString(MapBalance[username][0]);

        ui->label->setText("");

    } else {
        qDebug() << "SellButtonPressed: No active investment to sell.";
        QMessageBox::warning(this, "No Investment", "You do not have any active investment to sell.");
    }
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

    // Move up directories to access the root project directory
    QDir projectRootDir(executableDir);
    projectRootDir.cdUp();
    projectRootDir.cdUp();

    QString scriptPath = projectRootDir.absoluteFilePath("Test.py");
    QString command = QString("python \"%1\"").arg(scriptPath);

    qDebug() << "Executing command:" << command;

    QProcess process;
    process.start(command);
    process.waitForFinished();

    QString output = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    if (!error.isEmpty()) {
        qDebug() << "Error from Python script:" << error;
        return;
    }

    QString trimmedOutput = output.trimmed();
    qDebug() << "Output from Python script:" << trimmedOutput;

    // Update BTC price display
    ui->BitcoinPrice->setText("1 BTC: " + trimmedOutput + "$");

    std::string username = ui->usernameCard->text().toStdString();
    std::string currentPriceStr = trimmedOutput.toStdString();

    // Store current BTC price in slot 5
    if (MapBalance[username].size() < 6) {
        MapBalance[username].resize(6, "0");
    }
    MapBalance[username][5] = currentPriceStr;

    if (invested) {
        try {
            int BitcoinPriceNow = std::stoi(currentPriceStr);
            int BitcoinPriceWhenInvested = std::stoi(MapBalance[username][4]);
            int MoneyWhenInvested = std::stoi(MapBalance[username][3]);

            float percentageChange = static_cast<float>(BitcoinPriceNow - BitcoinPriceWhenInvested) / BitcoinPriceWhenInvested;
            float newValue = MoneyWhenInvested * (1.0f + percentageChange);

            MapBalance[username][2] = std::to_string(static_cast<int>(newValue));

            // Set investment label text
            QString valueStr = QString::fromStdString(MapBalance[username][2]) + " $";
            ui->label->setText(valueStr);

            // Custom styles
            QString redStyle = R"(
                QLabel {
                    color: red;
                    font-family: "San Francisco", "Helvetica Neue", "Segoe UI", "Arial", sans-serif;
                    font-size: 45px;
                    font-weight: 600;
                    padding: 10px 22px;
                    border: none;
                    border-radius: 14px;
                    min-height: 40px;
                    min-width: 120px;
                    letter-spacing: 0.4px;
                })";

            QString greenStyle = R"(
                QLabel {
                    color: green;
                    font-family: "San Francisco", "Helvetica Neue", "Segoe UI", "Arial", sans-serif;
                    font-size: 45px;
                    font-weight: 600;
                    padding: 10px 22px;
                    border: none;
                    border-radius: 14px;
                    min-height: 40px;
                    min-width: 120px;
                    letter-spacing: 0.4px;
                })";

            // Apply style based on performance
            if (BitcoinPriceNow < BitcoinPriceWhenInvested) {
                ui->label->setStyleSheet(redStyle);
            } else {
                ui->label->setStyleSheet(greenStyle);
            }

            qDebug() << "Investment updated successfully.";
            qDebug() << "BTC Now:" << BitcoinPriceNow
                     << "BTC When Invested:" << BitcoinPriceWhenInvested
                     << "Invested Money:" << MoneyWhenInvested
                     << "New Value:" << newValue;
        } catch (const std::exception &e) {
            qDebug() << "Error in investment calculation:" << e.what();
        }
    }
}


DashboardWindow::~DashboardWindow()
{
    delete ui;
    qDebug() << "DashboardWindow destroyed.";
}
