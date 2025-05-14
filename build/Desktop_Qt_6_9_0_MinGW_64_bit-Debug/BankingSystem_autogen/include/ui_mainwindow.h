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
    QGridLayout *gridLayout;
    QLineEdit *usernameText;
    QLineEdit *passwordText;
    QGridLayout *gridLayout_2;
    QPushButton *RegisterButton;
    QPushButton *LoginButton;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(392, 786);
        MainWindow->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background: qlineargradient(\n"
"                spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 #ffffff,   /* White (top-left) */\n"
"                stop:0.5 #f0f0f0, /* Light Gray (center) */\n"
"                stop:1 #e0e0e0);  /* Slightly Darker Gray (bottom-right) */\n"
"    color: #1c1c1e;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 24px;\n"
"    font-weight: 500;\n"
"    letter-spacing: 0.5px;\n"
"    padding: 10px; /* Optional: Adds spacing inside the QLabel */\n"
"    border-radius: 8px; /* Optional: Rounded corners for a softer look */\n"
"}"));
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(20, 310, 351, 511));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        usernameText = new QLineEdit(gridLayoutWidget_3);
        usernameText->setObjectName("usernameText");
        usernameText->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background: qlineargradient(\n"
"                spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 #eaf4ff,   /* Light blue (top-left) */\n"
"                stop:0.5 #d9ecff, /* Slightly darker blue (center) */\n"
"                stop:1 #c8e4ff);  /* Even darker blue (bottom-right) */\n"
"    color: #333;                                /* Dark text color */\n"
"    border: 1px solid #0078D4;                  /* Blue border */\n"
"    border-radius: 8px;                         /* Rounded corners for consistency */\n"
"    padding: 10px 20px;                         /* Inner padding for a comfortable size */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", \"Arial\", sans-serif;\n"
"    font-size: 18px;                            /* Modern text size */\n"
"    min-height: 40px;                           /* Min height for consistency with buttons */\n"
"    box-shadow: 0px 2px 4px rgba(0, 120, 212, 0.2); /* Subtle shadow for depth */\n"
"    transition: border-color 0.3s "
                        "ease, box-shadow 0.3s ease; /* Smooth transitions */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #005A9E;                  /* Slightly darker blue on focus */\n"
"    background: qlineargradient(\n"
"                spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 #ffffff,   /* White (top-left) */\n"
"                stop:1 #e6f2ff);  /* Very light blue (bottom-right) */\n"
"    color: #1c1c1e;                             /* Darker text color */\n"
"    box-shadow: 0 0 6px rgba(0, 90, 158, 0.4);  /* Subtle blue glow around input */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #a6a6a6;                             /* Light gray placeholder text */\n"
"    font-style: italic;                         /* Italic placeholder */\n"
"}"));

        gridLayout->addWidget(usernameText, 0, 1, 1, 1);

        passwordText = new QLineEdit(gridLayoutWidget_3);
        passwordText->setObjectName("passwordText");
        passwordText->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background: qlineargradient(\n"
"                spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 #eaf4ff,   /* Light blue (top-left) */\n"
"                stop:0.5 #d9ecff, /* Slightly darker blue (center) */\n"
"                stop:1 #c8e4ff);  /* Even darker blue (bottom-right) */\n"
"    color: #333;                                /* Dark text color */\n"
"    border: 1px solid #0078D4;                  /* Blue border */\n"
"    border-radius: 8px;                         /* Rounded corners for consistency */\n"
"    padding: 10px 20px;                         /* Inner padding for a comfortable size */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", \"Arial\", sans-serif;\n"
"    font-size: 18px;                            /* Modern text size */\n"
"    min-height: 40px;                           /* Min height for consistency with buttons */\n"
"    box-shadow: 0px 2px 4px rgba(0, 120, 212, 0.2); /* Subtle shadow for depth */\n"
"    transition: border-color 0.3s "
                        "ease, box-shadow 0.3s ease; /* Smooth transitions */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #005A9E;                  /* Slightly darker blue on focus */\n"
"    background: qlineargradient(\n"
"                spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                stop:0 #ffffff,   /* White (top-left) */\n"
"                stop:1 #e6f2ff);  /* Very light blue (bottom-right) */\n"
"    color: #1c1c1e;                             /* Darker text color */\n"
"    box-shadow: 0 0 6px rgba(0, 90, 158, 0.4);  /* Subtle blue glow around input */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #a6a6a6;                             /* Light gray placeholder text */\n"
"    font-style: italic;                         /* Italic placeholder */\n"
"}"));

        gridLayout->addWidget(passwordText, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        RegisterButton = new QPushButton(gridLayoutWidget_3);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout_2->addWidget(RegisterButton, 3, 0, 1, 1);

        LoginButton = new QPushButton(gridLayoutWidget_3);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout_2->addWidget(LoginButton, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

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
        RegisterButton->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
