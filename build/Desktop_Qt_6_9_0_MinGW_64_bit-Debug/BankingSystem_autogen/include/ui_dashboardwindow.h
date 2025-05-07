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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardWindow
{
public:
    QWidget *centralwidget;
    QWidget *WidgetVert_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *Icon;
    QWidget *WidgetVert_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *LabelName;
    QWidget *WidgetVert;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *DashboardWindow)
    {
        if (DashboardWindow->objectName().isEmpty())
            DashboardWindow->setObjectName("DashboardWindow");
        DashboardWindow->resize(1302, 847);
        centralwidget = new QWidget(DashboardWindow);
        centralwidget->setObjectName("centralwidget");
        WidgetVert_3 = new QWidget(centralwidget);
        WidgetVert_3->setObjectName("WidgetVert_3");
        WidgetVert_3->setGeometry(QRect(0, 0, 381, 851));
        WidgetVert_3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #96ceff;        /* Deep blue background */\n"
"    color: #ffffff;                   /* Change text to white for better contrast */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", sans-serif;\n"
"    font-size: 16px;\n"
"    border: none;                     /* Ensure no default borders */\n"
"    border-top-left-radius: 0px;      /* No rounding for top-left corner */\n"
"    border-top-right-radius: 16px;    /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 16px; /* Rounded bottom-right corner */\n"
"    border-bottom-left-radius: 0px;  /* Rounded bottom-left corner */\n"
"    padding: 12px;                    /* Optional inner spacing */\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(WidgetVert_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Icon = new QLabel(WidgetVert_3);
        Icon->setObjectName("Icon");

        verticalLayout_3->addWidget(Icon);

        WidgetVert_2 = new QWidget(WidgetVert_3);
        WidgetVert_2->setObjectName("WidgetVert_2");
        WidgetVert_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #4caafc;        /* Deep blue background */\n"
"    color: #ffffff;                   /* Change text to white for better contrast */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", sans-serif;\n"
"    font-size: 16px;\n"
"    border: none;                     /* Ensure no default borders */\n"
"    border-top-left-radius: 16px;      /* No rounding for top-left corner */\n"
"    border-top-right-radius: 16px;    /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 16px; /* Rounded bottom-right corner */\n"
"    border-bottom-left-radius: 0px;  /* Rounded bottom-left corner */\n"
"    padding: 12px;                    /* Optional inner spacing */\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(WidgetVert_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(WidgetVert_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        LabelName = new QLabel(WidgetVert_2);
        LabelName->setObjectName("LabelName");
        LabelName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));

        horizontalLayout->addWidget(LabelName);


        verticalLayout_2->addLayout(horizontalLayout);

        WidgetVert = new QWidget(WidgetVert_2);
        WidgetVert->setObjectName("WidgetVert");
        WidgetVert->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #0586f7;        /* Deep blue background */\n"
"    color: #ffffff;                   /* Change text to white for better contrast */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", sans-serif;\n"
"    font-size: 16px;\n"
"    border-top-left-radius: 16px;      /* No rounding for top-left corner */\n"
"    border-top-right-radius: 16px;    /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 16px; /* Rounded bottom-right corner */\n"
"    border-bottom-left-radius: 0px;  /* Rounded bottom-left corner */\n"
"    padding: 12px;                    /* Optional inner spacing */\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(WidgetVert);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(WidgetVert);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0586f7;  /* Royal blue with a hint of purple */\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0267bf;  /* Slightly darker blue on hover */\n"
"    border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #262f87;  /* Even deeper blue when pressed */\n"
"    border: none;\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(WidgetVert);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0586f7;  /* Royal blue with a hint of purple */\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0267bf;  /* Slightly darker blue on hover */\n"
"    border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #262f87;  /* Even deeper blue when pressed */\n"
"    border: none;\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(WidgetVert);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0586f7;  /* Royal blue with a hint of purple */\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0267bf;  /* Slightly darker blue on hover */\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #262f87;  /* Even deeper blue when pressed */\n"
"    border: none;\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(WidgetVert);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0586f7;  /* Royal blue with a hint of purple */\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0267bf;  /* Slightly darker blue on hover */\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #262f87;  /* Even deeper blue when pressed */\n"
"    border: none;\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_4);


        verticalLayout_2->addWidget(WidgetVert);


        verticalLayout_3->addWidget(WidgetVert_2);

        DashboardWindow->setCentralWidget(centralwidget);

        retranslateUi(DashboardWindow);

        QMetaObject::connectSlotsByName(DashboardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DashboardWindow)
    {
        DashboardWindow->setWindowTitle(QCoreApplication::translate("DashboardWindow", "MainWindow", nullptr));
        Icon->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        label->setText(QString());
        LabelName->setText(QCoreApplication::translate("DashboardWindow", "Account : Admin", nullptr));
        pushButton->setText(QCoreApplication::translate("DashboardWindow", "Transaction", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DashboardWindow", "Investments", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DashboardWindow", "Deposit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DashboardWindow", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardWindow: public Ui_DashboardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDWINDOW_H
