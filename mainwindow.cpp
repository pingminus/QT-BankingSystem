#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <unordered_map>
#include <string>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setAlignment(Qt::AlignCenter);
    this->setStyleSheet("background-color: #f5f5f7;");
    ui->usernameText->setPlaceholderText("Enter username");
    ui->passwordText->setPlaceholderText("Enter password");
    QPixmap pixmap(":/images/Bank.png");
    ui->label->setPixmap(pixmap);

    connect(ui->LoginButton,SIGNAL(released()),this,SLOT(LoginButtonpressed()));
    connect(ui->RegisterButton,SIGNAL(released()),this,SLOT(RegisterButtonpressed()));



}
std::unordered_map<std::string,std::string> HashMap;


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::LoginButtonpressed(){


    qDebug() << "Test";
}
void MainWindow::RegisterButtonpressed(){
    std::string username = ui->usernameText->text().toStdString();
    if(HashMap.find(username) == HashMap.end()){
        std::string password = ui->passwordText->text().toStdString();
        HashMap[username] = password;
        qDebug() << "Succesfully registered as " << username ;
        ui->usernameText->setText("");
        ui->passwordText->setText("");
    }

    qDebug() << "RegisterButtonpressed";
}


