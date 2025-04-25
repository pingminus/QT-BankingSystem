/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *RegisterButton;
    QPushButton *LoginButton;
    QGridLayout *gridLayout;
    QLineEdit *passwordText;
    QLineEdit *usernameText;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(392, 812);
        MainWindow->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(20, 310, 351, 511));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        RegisterButton = new QPushButton(gridLayoutWidget_3);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #fcfcfc, stop: 1 #e9e9eb\n"
"    );\n"
"    color: #1d1d1f;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: 1px solid #cfcfd0;\n"
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
"    border: 1px solid #bfbfc0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #dcdcdc, stop: 1 #c9c9cb\n"
"    );\n"
"    border: 1px solid #a9a9ab;\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
""));

        gridLayout_2->addWidget(RegisterButton, 1, 0, 1, 1);

        LoginButton = new QPushButton(gridLayoutWidget_3);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #fcfcfc, stop: 1 #e9e9eb\n"
"    );\n"
"    color: #1d1d1f;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: 1px solid #cfcfd0;\n"
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
"    border: 1px solid #bfbfc0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 #dcdcdc, stop: 1 #c9c9cb\n"
"    );\n"
"    border: 1px solid #a9a9ab;\n"
"    padding-top: 11px;\n"
"    padding-bottom: 9px;\n"
"}\n"
""));

        gridLayout_2->addWidget(LoginButton, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        passwordText = new QLineEdit(gridLayoutWidget_3);
        passwordText->setObjectName("passwordText");
        passwordText->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f5f5f5;                  /* Light background */\n"
"    color: #333;                                /* Dark text color */\n"
"    border: 1px solid #dcdcdc;                  /* Light border */\n"
"    border-radius: 12px;                        /* Rounded corners */\n"
"    padding: 10px 15px;                         /* Inner padding */\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 24px;                            /* Text size */\n"
"    min-height: 36px;                           /* Min height for consistency */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #007aff;                  /* Blue border on focus */\n"
"    background-color: #ffffff;                  /* White background when focused */\n"
"    color: #1c1c1e;                             /* Darker text color */\n"
"    box-shadow: 0 0 5px rgba(0, 122, 255, 0.5);  /* Subtle blue glow around input */\n"
"}\n"
"\n"
"QLineEdit::placeh"
                        "older {\n"
"    color: #a6a6a6;                             /* Light gray placeholder text */\n"
"    font-style: italic;                         /* Italic placeholder */\n"
"}\n"
""));

        gridLayout->addWidget(passwordText, 1, 1, 1, 1);

        usernameText = new QLineEdit(gridLayoutWidget_3);
        usernameText->setObjectName("usernameText");
        usernameText->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f5f5f5;                  /* Light background */\n"
"    color: #333;                                /* Dark text color */\n"
"    border: 1px solid #dcdcdc;                  /* Light border */\n"
"    border-radius: 12px;                        /* Rounded corners */\n"
"    padding: 10px 15px;                         /* Inner padding */\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 24px;                            /* Text size */\n"
"    min-height: 36px;                           /* Min height for consistency */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #007aff;                  /* Blue border on focus */\n"
"    background-color: #ffffff;                  /* White background when focused */\n"
"    color: #1c1c1e;                             /* Darker text color */\n"
"    box-shadow: 0 0 5px rgba(0, 122, 255, 0.5);  /* Subtle blue glow around input */\n"
"}\n"
"\n"
"QLineEdit::placeh"
                        "older {\n"
"    color: #a6a6a6;                             /* Light gray placeholder text */\n"
"    font-style: italic;                         /* Italic placeholder */\n"
"}\n"
""));

        gridLayout->addWidget(usernameText, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 391, 331));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: transparent;\n"
"    color: #1c1c1e;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 24px;\n"
"    font-weight: 500;\n"
"    letter-spacing: 0.5px;\n"
"}\n"
""));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(usernameText, passwordText);
        QWidget::setTabOrder(passwordText, LoginButton);
        QWidget::setTabOrder(LoginButton, RegisterButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        RegisterButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
