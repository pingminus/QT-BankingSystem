#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>
#include <QTimer>
#include <QProcess>
#include <QDir>
#include <QCloseEvent>
#include <QApplication>

/**
 * @author pingplus
 * @brief DashboardWindow constructor
 *
 * Initializes the dashboard interface for the banking/investment application.
 *
 * @param username The logged-in user's username
 * @param sharedMapBalance Reference to the shared balance data across application
 * @param sharedTransactions Reference to the shared transaction history
 * @param parent Parent widget (typically the login window)
 */
DashboardWindow::DashboardWindow(const std::string& username,
                                 std::map<std::string, std::vector<std::string>>& sharedMapBalance,
                                 std::map<std::string, std::vector<std::string>>& sharedTransactions,
                                 QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow)
    , m_balanceMap(sharedMapBalance)
    , m_transactions(sharedTransactions)
    , m_username(username)
    , m_isInvested(false)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter amount to invest");

    // Initialize timer for Bitcoin price updates
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &DashboardWindow::updateBitcoinPrice);
    timer->start(20000); // Run every 20 seconds because of API time out // if simulated BTCPrice.py is used change to 2 seconds

    initializeUserData();
    setupUserInterface();
    connectSignalsAndSlots();

    // Initial update of Bitcoin price
    updateBitcoinPrice();
}

/**
 * @brief Initialize user balance and transaction data
 */
void DashboardWindow::initializeUserData()
{
    qDebug() << "Initializing user data for:" << QString::fromStdString(m_username);

    // Initialize user balance if not present
    // Balance vector structure: [main balance, savings balance, current investment value,
    //                           original invested amount, BTC price at investment]
    if (m_balanceMap.find(m_username) == m_balanceMap.end()) {
        m_balanceMap[m_username] = {"100000", "20000", "0", "0", "0"};
        qDebug() << "No existing balance found. Setting default balances.";
    }

    // Initialize transaction history if not present
    if (m_transactions.find(m_username) == m_transactions.end()) {
        m_transactions[m_username] = {};
        qDebug() << "No existing transactions found. Initializing empty history.";
    }

    // Update UI with initial values
    updateBalanceDisplay();
    updateTransactionHistory();
}

/**
 * @brief Set up the user interface elements and styling
 */
void DashboardWindow::setupUserInterface()
{
    // Window properties
    this->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    this->setStyleSheet("background-color: #f5f5f7;");
    this->setWindowIcon(QIcon(":/images/BankingIcon.png"));

    // Set username in UI elements
    ui->LabelName->setAlignment(Qt::AlignCenter);
    ui->LabelName->setText(QString::fromStdString(m_username));
    ui->usernameCard->setText(QString::fromStdString(m_username));
    ui->usernameCard_3->setText(QString::fromStdString(m_username));

    // Set read-only for Bitcoin info display
    ui->textEdit->setReadOnly(true);

    // Load and scale images
    loadImages();
}

/**
 * @brief Connect UI signals to their corresponding slots
 */
void DashboardWindow::connectSignalsAndSlots()
{
    connect(ui->HomeButton, &QPushButton::released, this, &DashboardWindow::showHomeView);
    connect(ui->InfoButton, &QPushButton::released, this, &DashboardWindow::showInfoView);
    connect(ui->SignoutButton, &QPushButton::released, this, &DashboardWindow::signOut);
    connect(ui->TransferButton, &QPushButton::released, this, &DashboardWindow::showTransferView);
    connect(ui->SendButton, &QPushButton::released, this, &DashboardWindow::processTransfer);
    connect(ui->InvestButton, &QPushButton::released, this, &DashboardWindow::showInvestView);
    connect(ui->Invest, &QPushButton::released, this, &DashboardWindow::buyBitcoin);
    connect(ui->Sell, &QPushButton::released, this, &DashboardWindow::sellBitcoin);
}

/**
 * @brief Load and set images for UI elements
 */
void DashboardWindow::loadImages()
{
    // App icons
    QPixmap bankIcon(":/images/BankingIcon.png");
    bankIcon = bankIcon.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon->setPixmap(bankIcon);

    QPixmap bankSolo(":/images/BankSolo.png");
    bankSolo = bankSolo.scaled(179, 179, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon_2->setPixmap(bankSolo);

    ui->Icon_4->setPixmap(QPixmap(":/images/Bank2.png").scaled(ui->Icon_4->size(), Qt::KeepAspectRatio));
    ui->label_15->setPixmap(QPixmap(":/images/evm.png").scaled(ui->label_15->size(), Qt::KeepAspectRatio));
    ui->label_4->setPixmap(QPixmap(":/images/evm.png").scaled(ui->label_4->size(), Qt::KeepAspectRatio));

    // Bitcoin icon
    QPixmap bitcoinIcon(":/images/Bitcoin.png");
    bitcoinIcon = bitcoinIcon.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->BitcoinIcon->setPixmap(bitcoinIcon);
}

/**
 * @brief Update the balance display in the UI
 */
void DashboardWindow::updateBalanceDisplay()
{
    const auto& balances = m_balanceMap[m_username];
    ui->BalanceCard1->setText(QString::fromStdString(balances[0] + "$"));
    ui->BalanceCard2_2->setText(QString::fromStdString(balances[1] + "$"));
}

/**
 * @brief Update the transaction history display
 */
void DashboardWindow::updateTransactionHistory()
{
    ui->listWidget->clear();
    for (const std::string &transaction : m_transactions[m_username]) {
        ui->listWidget->addItem(QString::fromStdString(transaction));
    }
}

/**
 * @brief Show the investment view
 */
void DashboardWindow::showInvestView()
{
    qDebug() << "Switching to Investment view";
    ui->stackedWidget->setCurrentIndex(3);
}

/**
 * @brief Show the information view
 */
void DashboardWindow::showInfoView()
{
    ui->stackedWidget->setCurrentIndex(0);
    qDebug() << "Switched to Information view.";
}

/**
 * @brief Show the home view
 */
void DashboardWindow::showHomeView()
{
    ui->stackedWidget->setCurrentIndex(2);
    qDebug() << "Switched to Home view.";
}

/**
 * @brief Show the transfer/payment view
 */
void DashboardWindow::showTransferView()
{
    ui->stackedWidget->setCurrentIndex(1);
    qDebug() << "Switched to Transfer view.";
}

/**
 * @brief Handle user sign out
 */
void DashboardWindow::signOut()
{
    this->hide();
    if (parentWidget()) {
        parentWidget()->show();
    }
    qDebug() << "User signed out.";
}

/**
 * @brief Process Bitcoin purchase
 */
void DashboardWindow::buyBitcoin()
{
    // Don't allow multiple investments at once
    if (m_isInvested) {
        qDebug() << "Already invested. Ignoring buy request.";
        return;
    }

    bool conversionOk = false;
    int investedCash = ui->lineEdit->text().toInt(&conversionOk);

    if (!conversionOk || investedCash <= 0) {
        qDebug() << "Invalid Amount: Please enter a valid positive amount.";
        return;
    }

    auto& userBalance = m_balanceMap[m_username];
    int currentBalance = std::stoi(userBalance[0]);

    if (investedCash > currentBalance) {
        qDebug() << "Insufficient Funds: You don't have enough balance to invest.";
        return;
    }
    // Process the investment
    int newBalance = currentBalance - investedCash;
    userBalance[0] = std::to_string(newBalance);

    // Store investment information
    userBalance[2] = std::to_string(investedCash); // Current value of investment
    userBalance[3] = std::to_string(investedCash); // Original invested amount

    // Record BTC price at time of investment
    QString priceText = ui->BitcoinPrice->text().split(":").last().remove("$").trimmed();
    userBalance[4] = priceText.toStdString();

    m_isInvested = true;

    // Update UI
    updateBalanceDisplay();

    // Add transaction record
    QString transaction = QString("Bought Bitcoin: %1 $ at %2 $/BTC").arg(investedCash).arg(priceText);
    m_transactions[m_username].push_back(transaction.toStdString());
    ui->listWidget->addItem(transaction);

    qDebug() << "Investment made at BTC price:" << QString::fromStdString(userBalance[4]);
    qDebug() << "New balance is:" << QString::fromStdString(userBalance[0]);

    ui->label->setText(QString("%1$").arg(investedCash));
    ui->lineEdit->clear();
}

/**
 * @brief Process Bitcoin sale
 */
void DashboardWindow::sellBitcoin()
{
    if (!m_isInvested) {
        qDebug() << "No Investment: You do not have any active investment to sell.";
        return;
    }
    auto& userBalance = m_balanceMap[m_username];

    // Calculate return amount
    int investmentValue = std::stoi(userBalance[2]);  // Current investment value
    int currentBalance = std::stoi(userBalance[0]);   // Current balance

    // Add the current investment value back to balance
    int newBalance = currentBalance + investmentValue;
    userBalance[0] = std::to_string(newBalance);

    // Reset investment data
    userBalance[2] = "0";  // Current value of investment
    userBalance[3] = "0";  // Original investment amount
    userBalance[4] = "0";  // BTC price at investment time

    // Update UI
    updateBalanceDisplay();

    // Add transaction record
    QString transaction = QString("Sold Bitcoin: %1 $ returned to balance").arg(investmentValue);
    m_transactions[m_username].push_back(transaction.toStdString());
    ui->listWidget->addItem(transaction);

    // Reset investment flag and UI
    m_isInvested = false;
    ui->label->setText("");

    qDebug() << "Investment sold. New balance: " << QString::fromStdString(userBalance[0]);
}

/**
 * @brief Process money transfer between accounts
 */
void DashboardWindow::processTransfer()
{
    int sourceCardIndex = ui->combobox->currentIndex();
    QString receiverUsername = ui->WhoLineEdit->text();
    QString message = ui->message->text();

    // Basic validation
    if (receiverUsername.isEmpty()) {
        qDebug() << "Missing Recipient: Please enter a recipient username.";
        return;
    }

    bool conversionOk = false;
    int amount = ui->amount->text().toInt(&conversionOk);

    if (!conversionOk || amount <= 0) {
        qDebug() << "Invalid Amount: Please enter a valid positive amount.";
        return;
    }
    std::string receiverStr = receiverUsername.toStdString();

    // Check if sender and receiver are the same
    if (m_username == receiverStr) {
        qDebug() << "Invalid Transfer: You cannot transfer money to yourself.";
        return;
    }

    // Check if receiver exists
    if (m_balanceMap.find(receiverStr) == m_balanceMap.end()) {
        qDebug() << "Unknown Recipient: The recipient does not have an account.";
        return;
    }

    // Check sender's balance
    if (std::stoi(m_balanceMap[m_username][sourceCardIndex]) < amount) {
        qDebug() << "Insufficient Funds: You don't have enough balance in the selected account.";
        return;
    }

    // Perform the transfer
    m_balanceMap[m_username][sourceCardIndex] = std::to_string(
        std::stoi(m_balanceMap[m_username][sourceCardIndex]) - amount
        );

    m_balanceMap[receiverStr][sourceCardIndex] = std::to_string(
        std::stoi(m_balanceMap[receiverStr][sourceCardIndex]) + amount
        );

    // Handle anonymous transfer option
    bool isAnonymous = ui->checkBox->isChecked();
    QString senderName = isAnonymous ? "Anonymous" : QString::fromStdString(m_username);
    QString receiverName = isAnonymous ? "Anonymous" : receiverUsername;

    // Create transaction records
    QString senderTransaction = QString("-%1 $ to %2 from Card-%3 | Msg: %4")
                                    .arg(amount)
                                    .arg(receiverName)
                                    .arg(sourceCardIndex + 1)
                                    .arg(message);

    QString receiverTransaction = QString("+%1 $ from %2 from Card-%3 | Msg: %4")
                                      .arg(amount)
                                      .arg(senderName)
                                      .arg(sourceCardIndex + 1)
                                      .arg(message);

    // Store transaction records
    m_transactions[m_username].push_back(senderTransaction.toStdString());
    m_transactions[receiverStr].push_back(receiverTransaction.toStdString());

    // Update UI
    ui->listWidget->addItem(senderTransaction);
    updateBalanceDisplay();

    // Clear input fields
    ui->WhoLineEdit->clear();
    ui->amount->clear();
    ui->message->clear();

    qDebug() << "Transfer Complete: Your transfer has been completed successfully.";
    qDebug() << "Transfer successful!";
}

/**
 * @brief Updates the Bitcoin price by running an external Python script
 */
void DashboardWindow::updateBitcoinPrice()
{
    // Get the directory of the executable
    QString executableDir = QCoreApplication::applicationDirPath();

    // Move up directories to access the root project directory
    QDir projectRootDir(executableDir);
    projectRootDir.cdUp(); // Go up to build directory
    projectRootDir.cdUp(); // Go up to project root

    QString scriptPath = projectRootDir.absoluteFilePath("scripts\\getBTCPrice.py");

    // Safety check - make sure the script exists
    if (!QFile::exists(scriptPath)) {
        qDebug() << "Bitcoin price script not found at:" << scriptPath;
        return;
    }

    // Run the Python script
    QProcess process;
    QString command = QString("python \"%1\"").arg(scriptPath);

    process.start(command);
    if (!process.waitForFinished(5000)) { // 5 second timeout
        qDebug() << "Bitcoin price script timed out";
        return;
    }

    QString output = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    if (!error.isEmpty()) {
        qDebug() << "Error from Bitcoin price script:" << error;
        return;
    }

    QString trimmedPrice = output.trimmed();

    // Update BTC price display
    ui->BitcoinPrice->setText("1 BTC: " + trimmedPrice + "$");

    // Store current BTC price
    auto& userBalance = m_balanceMap[m_username];
    if (userBalance.size() < 6) {
        userBalance.resize(6, "0");
    }
    userBalance[5] = trimmedPrice.toStdString();

    // Update investment value if user is currently invested
    updateInvestmentValue(trimmedPrice);
}

/**
 * @brief Updates the current investment value based on Bitcoin price changes
 *
 * @param currentPriceStr Current Bitcoin price as string
 */
void DashboardWindow::updateInvestmentValue(const QString& currentPriceStr)
{
    if (!m_isInvested) {
        return;
    }

    auto& userBalance = m_balanceMap[m_username];

    try {
        int bitcoinPriceNow = currentPriceStr.toInt();
        int bitcoinPriceAtInvestment = std::stoi(userBalance[4]);
        int originalInvestment = std::stoi(userBalance[3]);

        // Calculate new value based on BTC price change
        float percentageChange = static_cast<float>(bitcoinPriceNow - bitcoinPriceAtInvestment) / bitcoinPriceAtInvestment;
        float newValue = originalInvestment * (1.0f + percentageChange);

        // Update stored investment value
        userBalance[2] = std::to_string(static_cast<int>(newValue));

        // Update UI with new value and percentage change
        QString valueStr = QString::fromStdString(userBalance[2]) +
                           " $ (" + QString::number(percentageChange * 100, 'f', 2) + " %)";
        ui->label->setText(valueStr);

        // Apply appropriate color styling based on performance
        if (bitcoinPriceNow < bitcoinPriceAtInvestment) {
            ui->label->setStyleSheet(m_redValueStyle);
        } else {
            ui->label->setStyleSheet(m_greenValueStyle);
        }

        qDebug() << "Investment updated: Original:" << originalInvestment
                 << "New Value:" << newValue
                 << "Change:" << percentageChange * 100 << "%";

    } catch (const std::exception &e) {
        qDebug() << "Error in investment calculation:" << e.what();
    }
}

/**
 * @brief Handle window closing event (X button or Alt+F4)
 *
 * This overrides the default closeEvent to terminate the entire application
 * when the dashboard window is closed.
 *
 * @param event The close event
 */
void DashboardWindow::closeEvent(QCloseEvent *event)
{
    qDebug() << "DashboardWindow close event detected.";

    event->accept();

    // Only quit if this is the main application window (not a dialog, not a child)
        QApplication::quit();

    // Otherwise, do not quit the application!
}
/**
 * @brief DashboardWindow destructor
 */
DashboardWindow::~DashboardWindow()
{
    delete ui;
    qDebug() << "DashboardWindow destroyed.";
}
