#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"
#include <QDebug>

DashboardWindow::DashboardWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #f5f5f7;");


}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}

