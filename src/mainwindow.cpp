
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QLabel>
#include <QIcon>
#include <QPixmap>
#include "dashboardwindow.h"

/**
 * @brief MainWindow constructor
 *
 * Initializes the login/registration window of the application
 *
 * @param parent Parent widget pointer
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_errorLabel(nullptr)
{
    initializeUI();
    setupConnections();
}

/**
 * @brief Initialize the user interface components
 */
void MainWindow::initializeUI()
{
    // Setup MainWindow
    ui->setupUi(this);

    // Configure window appearance
    this->setWindowTitle("Banking Application");
    this->setStyleSheet("background-color: #96ceff;");
    this->setWindowIcon(QIcon(":/images/BankingIcon.png"));

    // Center the logo
    ui->label->setAlignment(Qt::AlignCenter);

    // Set input field placeholders
    ui->usernameText->setPlaceholderText("Enter username");
    ui->passwordText->setPlaceholderText("Enter password");

    // Load bank logo
    QPixmap bankLogo(":/images/BankingIcon.png");
    ui->label->setPixmap(bankLogo);

    // Create and configure error message label
    m_errorLabel = new QLabel(this);
    m_errorLabel->setStyleSheet("color: red; font-size: 15px");
    m_errorLabel->setGeometry(20, 525, 600, 40);
    m_errorLabel->hide();
}

/**
 * @brief Set up signal/slot connections
 */
void MainWindow::setupConnections()
{
    connect(ui->LoginButton, &QPushButton::released, this, &MainWindow::processLogin);
    connect(ui->RegisterButton, &QPushButton::released, this, &MainWindow::processRegistration);
}

/**
 * @brief Process user login attempt
 */
void MainWindow::processLogin()
{
    std::string username = ui->usernameText->text().toStdString();
    std::string password = ui->passwordText->text().toStdString();

    // Validate inputs
    if (username.empty() || password.empty()) {
        displayError("Please enter both username and password");
        return;
    }

    // Check if user exists
    if (m_userCredentials.find(username) != m_userCredentials.end()) {
        // Check if the password matches
        if (m_userCredentials[username] == password) {
            qDebug() << "Login successful for user:" << QString::fromStdString(username);

            // Create and show dashboard window
            DashboardWindow *dashboard = new DashboardWindow(username, m_userBalances, m_transactions, this);
            dashboard->show();

            // Hide login window
            this->hide();
        } else {
            displayError("Incorrect password");
        }
    } else {
        displayError("User does not exist");
    }
}

/**
 * @brief Process user registration attempt
 */
void MainWindow::processRegistration()
{
    std::string username = ui->usernameText->text().toStdString();
    std::string password = ui->passwordText->text().toStdString();

    // Validate username
    if (username.size() < 3) {
        displayError("Username must be at least 3 characters");
        return;
    }

    // Check if username already exists
    if (m_userCredentials.find(username) != m_userCredentials.end()) {
        displayError("Username already exists");
        return;
    }

    // Validate password
    if (password.size() < 3) {
        displayError("Password must be at least 3 characters");
        return;
    }

    // Register the new user
    m_userCredentials[username] = password;

    // Initialize account balances for the new user
    // [Main balance, Savings balance, Current investment value, Original invested amount, BTC price at investment]
    m_userBalances[username] = {"100000", "20000", "0", "0", "0", "0"};

    // Clear input fields
    ui->usernameText->clear();
    ui->passwordText->clear();

    // Show success message
    displaySuccess("Registration successful! You can now log in.");

    qDebug() << "User registered successfully:" << QString::fromStdString(username);
}

/**
 * @brief Display an error message to the user
 *
 * @param errorMessage The error message to display
 */
void MainWindow::displayError(const std::string& errorMessage)
{
    m_errorLabel->setStyleSheet("color: red; font-size: 15px");
    m_errorLabel->setText(QString::fromStdString(errorMessage));
    m_errorLabel->show();

    qDebug() << "Error displayed:" << QString::fromStdString(errorMessage);
}

/**
 * @brief Display a success message to the user
 *
 * @param message The success message to display
 */
void MainWindow::displaySuccess(const std::string& message)
{
    m_errorLabel->setStyleSheet("color: green; font-size: 15px");
    m_errorLabel->setText(QString::fromStdString(message));
    m_errorLabel->show();

    qDebug() << "Success message displayed:" << QString::fromStdString(message);
}

/**
 * @brief MainWindow destructor
 */
MainWindow::~MainWindow()
{
    delete ui;

    // No need to delete m_errorLabel as it's a child of this widget
    // and will be automatically deleted when the parent is destroyed
}

