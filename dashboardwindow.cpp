#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>
#include <string>
#include "mainwindow.h"
DashboardWindow::DashboardWindow(const std::string username, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow)
{
    Transactions.push_back("+1512 $");
    Transactions.push_back("-41 $");
    Transactions.push_back("+9 $");
    Transactions.push_back("-441 $");
    Transactions.push_back("+31512 $");
    Transactions.push_back("-411 $");

    ui->setupUi(this);

    if(MapBalance.find(username) != MapBalance.end()){
    }else {
        MapBalance[username] = {"12525", "2514", "913"};
    }
    ui->BalanceCard1->setText(QString::fromStdString(MapBalance[username][0] + "$"));
    for(std::string transaction : Transactions){
        ui->listWidget->addItem(QString::fromStdString(transaction));
    }
    this->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);

    this->setStyleSheet("background-color: #f5f5f7;");
    ui->LabelName->setAlignment(Qt::AlignCenter);
    ui->LabelName->setText(QString::fromStdString(username)); //Should display Username from login
    // Load the pixmap
    ui->label->setMinimumSize(110, 120); // Set a minimum size for the QLabel

    // Dynamically scale the pixmap to QLabel's size
    QPixmap pixmap(":/profile/Profilepic.png");
    QSize labelSize = ui->label->size(); // Get the QLabel size
    pixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->label->setPixmap(pixmap);
    ui->label->setAlignment(Qt::AlignCenter);
    // Set window icon
    this->setWindowIcon(QIcon(":/images/Bank.png"));



    QPixmap map(":/images/Bank.png");
    map = map.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon->setPixmap(map);
    map = map.scaled(179, 179, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon_2->setPixmap(map);

    ui->label_4->setPixmap(QPixmap(":/images/evm.png").scaled(ui->label_4->size(), Qt::KeepAspectRatio));

    ui->usernameCard->setText(QString::fromStdString(username));

    connect(ui->HomeButton,SIGNAL(released()),this,SLOT(HomeButtonPressed()));
    connect(ui->InfoButton,SIGNAL(released()),this,SLOT(InformationButtonPressed()));
    connect(ui->SignoutButton,SIGNAL(released()),this,SLOT(SignoutButtonPressed()));

}
void DashboardWindow::InformationButtonPressed(){
    ui->stackedWidget->setCurrentIndex(0);
}
void DashboardWindow::HomeButtonPressed(){
    ui->stackedWidget->setCurrentIndex(2);
}
void DashboardWindow::SignoutButtonPressed(){
    this->hide(); // Hide the DashboardWindow instead of closing it
    if (parentWidget()) {
        parentWidget()->show(); // Show the parent MainWindow
    }
}
DashboardWindow::~DashboardWindow()
{
    delete ui;
}
