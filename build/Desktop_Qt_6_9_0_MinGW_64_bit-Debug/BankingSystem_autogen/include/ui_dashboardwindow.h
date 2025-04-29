/********************************************************************************
** Form generated from reading UI file 'dashboardwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDWINDOW_H
#define UI_DASHBOARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *DashboardWindow)
    {
        if (DashboardWindow->objectName().isEmpty())
            DashboardWindow->setObjectName("DashboardWindow");
        DashboardWindow->resize(1140, 978);
        centralwidget = new QWidget(DashboardWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 160, 371, 301));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 430, 321, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #fcfcfc, stop: 1 #e9e9eb\n"
"    );\n"
"    color: #1d1d1f;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;  /* No border */\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #ffffff, stop: 1 #f0f0f2\n"
"    );\n"
"    border: none;  /* No border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #dcdcdc, stop: 1 #c9c9cb\n"
"    );\n"
"    border: none;  /* No border on pressed state */\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #fcfcfc, stop: 1 #e9e9eb\n"
"    );\n"
"    color: #1d1d1f;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;  /* No border */\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #ffffff, stop: 1 #f0f0f2\n"
"    );\n"
"    border: none;  /* No border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #dcdcdc, stop: 1 #c9c9cb\n"
"    );\n"
"    border: none;  /* No border on pressed state */\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_2);

        DashboardWindow->setCentralWidget(centralwidget);

        retranslateUi(DashboardWindow);

        QMetaObject::connectSlotsByName(DashboardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DashboardWindow)
    {
        DashboardWindow->setWindowTitle(QCoreApplication::translate("DashboardWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("DashboardWindow", "Transaction", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DashboardWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardWindow: public Ui_DashboardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDWINDOW_H
