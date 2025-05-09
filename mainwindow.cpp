#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QLabel>
#include "dashboardwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    // Setup MainWindow
    ui->setupUi(this);
    ui->label->setAlignment(Qt::AlignCenter);
    this->setStyleSheet("background-color: #96ceff;");

    // Placeholders
    ui->usernameText->setPlaceholderText("Enter username");
    ui->passwordText->setPlaceholderText("Enter password");

    // Bank Logo
    QPixmap pixmap(":/images/Bank.png");
    ui->label->setPixmap(pixmap);
    this->setWindowIcon(QIcon(":/images/Bank.png"));

    // Dynamic informal Label
    errorLabel = new QLabel(this);
    errorLabel->setStyleSheet("color: red; font-size: 15px");
    errorLabel->setGeometry(20, 525, 600, 40);
    errorLabel->hide();

    // Connect Login and SignUp Buttons
    connect(ui->LoginButton, SIGNAL(released()), this, SLOT(LoginButtonpressed()));
    connect(ui->RegisterButton, SIGNAL(released()), this, SLOT(RegisterButtonpressed()));
}

// Login function
void MainWindow::LoginButtonpressed()
{
    // Get username and password
    std::string username = ui->usernameText->text().toStdString();
    std::string password = ui->passwordText->text().toStdString();

    // Check if user exists
    if (HashMap.find(username) != HashMap.end()) {
        // Check if the password matches
        if (HashMap[username] == password) {
            qDebug() << "Login Success";
            this->close();
            DashboardWindow *dashboard = new DashboardWindow(username, SharedMapBalance, SharedTransactions, this);
            dashboard->show();
        } else {
            ErrorFunction("Wrong password");
        }
    } else {
        ErrorFunction("User does not exist");
    }
}

// Error function to display errors
void MainWindow::ErrorFunction(std::string ErrorMessage)
{
    QString errorMessage = QString::fromStdString(ErrorMessage);

    // Display success message
    if (ErrorMessage == "Success!") {
        errorLabel->setStyleSheet("color: green; font-size: 15px");
        errorLabel->setText(errorMessage);
        errorLabel->show();
    } else {
        // Display error message
        errorLabel->setStyleSheet("color: red; font-size: 15px");
        errorLabel->setText(errorMessage);
        errorLabel->show();
        qDebug() << "Error label updated and shown.";
    }
}

// SignUp user function
void MainWindow::RegisterButtonpressed()
{
    std::string username = ui->usernameText->text().toStdString();

    if (HashMap.find(username) == HashMap.end()) {
        if (username.size() >= 3) {
            std::string password = ui->passwordText->text().toStdString();
            if (password.size() >= 3) {
                HashMap[username] = password;
                SharedMapBalance[username] = {"12525", "2514", "913"}; // Initialize balance for new user
                qDebug() << "Successfully registered as ";
                ui->usernameText->setText("");
                ui->passwordText->setText("");
                ErrorFunction("Success!");
            } else {
                ErrorFunction("Password is too short");
            }
        } else {
            ErrorFunction("Username is too short");
        }
    } else {
        ErrorFunction("Username already exists");
    }

    qDebug() << "Sign up Button was clicked";
}

MainWindow::~MainWindow()
{
    delete ui;
}

