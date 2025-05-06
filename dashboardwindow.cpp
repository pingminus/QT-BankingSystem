#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>
#include <string>

DashboardWindow::DashboardWindow(const std::string username, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow)
{
    this->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);
    this->setStyleSheet("background-color: #f5f5f7;");
    ui->LabelName->setAlignment(Qt::AlignCenter);
    ui->LabelName->setText("Account " + QString::fromStdString(username)); //Should display Username from login
    // Load the pixmap
    QPixmap pixmap(":/Profile/Profilepic.png");

    // Scale the pixmap to fit within a certain width and height
    int desiredWidth = 100; // Set your desired width
    int desiredHeight = 100; // Set your desired height

    // Resize the pixmap while preserving the aspect ratio
    pixmap = pixmap.scaled(desiredWidth, desiredHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    // Set the scaled pixmap to the QLabel
    ui->label->setPixmap(pixmap);
    ui->label->setAlignment(Qt::AlignCenter);

    // Optionally, adjust the QLabel's size to match the pixmap's size
    ui->label->setFixedSize(desiredWidth, desiredHeight);
    ui->label->setAlignment(Qt::AlignCenter);
    // Set window icon
    this->setWindowIcon(QIcon(":/images/Bank.png"));



    QPixmap map(":/images/Bank.png");
    map = map.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->Icon->setPixmap(map);
}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}
