#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>

DashboardWindow::DashboardWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #f5f5f7;");

    // Load the pixmap
    QPixmap pixmap(":/Profile/Profilepic.png");

    // Scale the pixmap to fit within a certain width and height
    int desiredWidth = 200; // Set your desired width
    int desiredHeight = 200; // Set your desired height

    // Resize the pixmap while preserving the aspect ratio
    pixmap = pixmap.scaled(desiredWidth, desiredHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    // Set the scaled pixmap to the QLabel
    ui->label->setPixmap(pixmap);

    // Optionally, adjust the QLabel's size to match the pixmap's size
    ui->label->setFixedSize(desiredWidth, desiredHeight);
    ui->label->setAlignment(Qt::AlignCenter);

    // Set window icon
    this->setWindowIcon(QIcon(":/images/Bank.png"));
}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}
