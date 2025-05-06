#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <unordered_map>
#include <string>
#include "dashboardwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    HashMap["Admin"] = "Admin";

    //Setup MainWindow
    ui->setupUi(this);
    ui->label->setAlignment(Qt::AlignCenter);
    this->setStyleSheet("background-color: #96ceff;");
    //Placeholders
    ui->usernameText->setPlaceholderText("Enter username");
    ui->passwordText->setPlaceholderText("Enter password");
    //Bank Logo
    QPixmap pixmap(":/images/Bank.png");
    ui->label->setPixmap(pixmap);
    this->setWindowIcon(QIcon(":/images/Bank.png"));

    //Dynamic informal Label
    errorLabel = new QLabel(this);
    errorLabel->setStyleSheet("color: red; font-size: 15px");
    errorLabel->setGeometry(20, 520, 600, 40);
    errorLabel->hide();

    //Connect Login and SignUp Button
    connect(ui->LoginButton,SIGNAL(released()),this,SLOT(LoginButtonpressed()));
    connect(ui->RegisterButton,SIGNAL(released()),this,SLOT(RegisterButtonpressed()));
}


MainWindow::~MainWindow()
{
    delete ui;
}



//Login function
void MainWindow::LoginButtonpressed(){
    //get username and password
    std::string username = ui->usernameText->text().toStdString();
    std::string password = ui->passwordText->text().toStdString();

    //Check if user exists
    if(HashMap.find(username) != HashMap.end()){
        //Check if the password matches
        if(HashMap[username] == password){
            qDebug() << "Login Sucess";
            this->close();
            DashboardWindow *dashboard = new DashboardWindow(username,this);
            dashboard->show();
        }
        //Display Errors/User feedback
        else{
            ErrorFunction("Wrong password");
        }
    }
    else{
        ErrorFunction("User does not exist");
    }
}

//Error function
//Display why user couldnt login
void MainWindow::ErrorFunction(std::string ErrorMessage) {
    QString errorMessage = QString::fromStdString(ErrorMessage);

    //Give user feedback when registration was successull
    if(ErrorMessage == "Success!"){
        errorLabel->setStyleSheet("color: green; font-size: 15px");
        errorLabel->setText(errorMessage);
        errorLabel->show();
    }
    //Display error message
    else{
        errorLabel->setStyleSheet("color: red; font-size: 15px");
        errorLabel->setText(errorMessage);
        errorLabel->show();
        qDebug() << "Error label updated and shown.";
    }

}

//SignUp user function
void MainWindow::RegisterButtonpressed(){

    std::string username = ui->usernameText->text().toStdString();

    if(HashMap.find(username) == HashMap.end()){
        if(username.size() >= 3){
            std::string password = ui->passwordText->text().toStdString();
            if(password.size() >= 3){
                HashMap[username] = password;
                qDebug() << "Succesfully registered as " << username ;
                ui->usernameText->setText("");
                ui->passwordText->setText("");
                ErrorFunction("Success!");
            }else{
                ErrorFunction("Password is too short");
            }
        }
        else{
            ErrorFunction("Username is too short");
        }
    }
    else{
        ErrorFunction("Username already exists");
    }


    qDebug() << "Sign up Button was clicked";

}


