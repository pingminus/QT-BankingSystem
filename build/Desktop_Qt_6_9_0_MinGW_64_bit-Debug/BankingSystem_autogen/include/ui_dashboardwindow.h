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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
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
    QLabel *LabelName;
    QWidget *WidgetVert;
    QVBoxLayout *verticalLayout;
    QPushButton *InfoButton;
    QPushButton *HomeButton;
    QPushButton *TransferButton;
    QPushButton *pushButton_2;
    QPushButton *SignoutButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QLabel *label_2;
    QProgressBar *progressBar_7;
    QProgressBar *progressBar_8;
    QTextEdit *textEdit;
    QWidget *page_3;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *combobox;
    QSpacerItem *horizontalSpacer;
    QLineEdit *WhoLineEdit;
    QLabel *label_10;
    QLabel *label_11;
    QCheckBox *checkBox;
    QLabel *label_12;
    QPushButton *SendButton;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *amount;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *message;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QProgressBar *progressBar_5;
    QWidget *page_2;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QLabel *label_4;
    QLabel *Icon_2;
    QLabel *label_5;
    QLabel *usernameCard;
    QLabel *BalanceCard1;
    QLabel *label_7;
    QListWidget *listWidget;
    QWidget *widget_3;
    QLabel *label_15;
    QLabel *Icon_4;
    QLabel *label_16;
    QLabel *usernameCard_3;
    QLabel *BalanceCard2_2;
    QLabel *label_17;
    QLabel *label_18;
    QProgressBar *progressBar_9;
    QProgressBar *progressBar_10;
    QProgressBar *progressBar_11;
    QWidget *tab_2;
    QWidget *tab_3;
    QProgressBar *progressBar_6;

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
        InfoButton = new QPushButton(WidgetVert);
        InfoButton->setObjectName("InfoButton");
        InfoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(InfoButton);

        HomeButton = new QPushButton(WidgetVert);
        HomeButton->setObjectName("HomeButton");
        HomeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(HomeButton);

        TransferButton = new QPushButton(WidgetVert);
        TransferButton->setObjectName("TransferButton");
        TransferButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(TransferButton);

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

        SignoutButton = new QPushButton(WidgetVert);
        SignoutButton->setObjectName("SignoutButton");
        SignoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(SignoutButton);


        verticalLayout_2->addWidget(WidgetVert);


        verticalLayout_3->addWidget(WidgetVert_2);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(390, -1, 911, 851));
        page = new QWidget();
        page->setObjectName("page");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 750, 164, 60));
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
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-20, 0, 251, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 35px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        progressBar_7 = new QProgressBar(page);
        progressBar_7->setObjectName("progressBar_7");
        progressBar_7->setGeometry(QRect(-30, 50, 1221, 23));
        progressBar_7->setValue(100);
        progressBar_8 = new QProgressBar(page);
        progressBar_8->setObjectName("progressBar_8");
        progressBar_8->setGeometry(QRect(-70, 580, 1221, 23));
        progressBar_8->setValue(100);
        textEdit = new QTextEdit(page);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 70, 911, 511));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #E6F7FF; /* Light blue background */\n"
"    border: 2px solid #0099CC; /* Blue border */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    color: #003366; /* Dark blue text color */\n"
"    padding: 5px; /* Padding inside the text edit */\n"
"    font: 14px \"Arial\"; /* Font style and size */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border: 2px solid #007ACC; /* Slightly darker blue on hover */\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 2px solid #005B99; /* Even darker blue when focused */\n"
"    background-color: #D6EFFF; /* Slightly darker blue background */\n"
"}"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-20, 0, 251, 60));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 35px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(-10, 200, 251, 60));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 25px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        horizontalLayoutWidget = new QWidget(page_3);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 250, 771, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        combobox = new QComboBox(horizontalLayoutWidget);
        combobox->addItem(QString());
        combobox->addItem(QString());
        combobox->setObjectName("combobox");
        combobox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        combobox->setStyleSheet(QString::fromUtf8("/* Base style for the QComboBox */\n"
"QComboBox {\n"
"  border: 1px solid #d0e8ff;\n"
"  border-radius: 8px;\n"
"  background-color: #f0f8ff;\n"
"  padding: 5px 10px;\n"
"  font-size: 16px;\n"
"  color: #333;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"  border-color: #9ec8ff;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"  border-color: #0078d7;\n"
"  outline: none;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"  subcontrol-origin: padding;\n"
"  subcontrol-position: top right;\n"
"  width: 30px;\n"
"  border-left: 1px solid #d0e8ff;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"  image: url(data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyNCAyNCI+PHBhdGggZD0iTTEyLjAwMiAxOC44MzNMMy4xNjUgMTBsMS40MTQtMS40MTQgNy40MTMgNy40MTMgNy40MTMtNy40MTMgMS40MTQgMS40MTQtOC44MzQgOC44MzQtLjcwOC0uNzA5eiIgZmlsbD0iIzAwNzhkNyIvPjwvc3ZnPg==); /* Down arrow in blue */\n"
"  width: 12px;\n"
"  height: 12px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"  border: 1px solid #d0e8ff;\n"
"  border-radius: 8px"
                        ";\n"
"  background-color: #ffffff;\n"
"  selection-background-color: #e6f4ff;\n"
"  selection-color: #333;\n"
"  padding: 5px;\n"
"  color: #333;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:hover {\n"
"  background-color: #f0f8ff;\n"
"  color: #0078d7;\n"
"}"));

        horizontalLayout_2->addWidget(combobox);

        horizontalSpacer = new QSpacerItem(70, 2, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        WhoLineEdit = new QLineEdit(horizontalLayoutWidget);
        WhoLineEdit->setObjectName("WhoLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WhoLineEdit->sizePolicy().hasHeightForWidth());
        WhoLineEdit->setSizePolicy(sizePolicy);
        WhoLineEdit->setStyleSheet(QString::fromUtf8("/* Base style for QLineEdit */\n"
"QLineEdit {\n"
"  border: 1px solid #d0e8ff;\n"
"  border-radius: 8px;\n"
"  background-color: #f0f8ff;\n"
"  padding: 5px 10px;\n"
"  font-size: 16px;\n"
"  color: #333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #9ec8ff;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #0078d7;\n"
"  box-shadow: 0 0 5px rgba(0, 120, 215, 0.5);\n"
"  outline: none;\n"
"}"));

        horizontalLayout_2->addWidget(WhoLineEdit);

        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(420, 200, 251, 60));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 25px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 350, 251, 60));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 25px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        checkBox = new QCheckBox(page_3);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(40, 530, 181, 31));
        checkBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        checkBox->setStyleSheet(QString::fromUtf8("/* Base style for QCheckBox */\n"
"QCheckBox {\n"
"  spacing: 8px; /* Space between the checkbox and the label */\n"
"  font-size: 16px;\n"
"  color: #333;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"  width: 20px;\n"
"  height: 20px;\n"
"  border: 2px solid #d0e8ff;\n"
"  border-radius: 4px;\n"
"  background-color: #ffffff;\n"
"  transition: background-color 0.3s, border-color 0.3s;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"  border-color: #9ec8ff;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"  border-color: #0078d7;\n"
"  background-color: #0078d7; /* Blue box when checked */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"  border-color: #005bb5;\n"
"  background-color: #005bb5; /* Darker blue on hover */\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled {\n"
"  border-color: #c5c5c5;\n"
"  background-color: #f5f5f5;\n"
"}"));
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(430, 350, 361, 60));
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 25px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"background: none;\n"
"}\n"
""));
        SendButton = new QPushButton(page_3);
        SendButton->setObjectName("SendButton");
        SendButton->setGeometry(QRect(20, 590, 771, 61));
        SendButton->setStyleSheet(QString::fromUtf8("/* Base style for QPushButton */\n"
"QPushButton {\n"
"  border: 2px solid #d0e8ff;\n"
"  border-radius: 8px;\n"
"  background-color: #f0f8ff;\n"
"  color: #333;\n"
"  padding: 8px 16px;\n"
"  font-size: 16px;\n"
"  font-weight: bold;\n"
"  text-align: center;\n"
"  transition: background-color 0.3s, border-color 0.3s, color 0.3s;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border-color: #9ec8ff;\n"
"  background-color: #e6f4ff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  border-color: #0078d7;\n"
"  background-color: #0078d7;\n"
"  color: #ffffff; /* Text turns white when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"  border-color: #c5c5c5;\n"
"  background-color: #f5f5f5;\n"
"  color: #a0a0a0;\n"
"}"));
        horizontalWidget_2 = new QWidget(page_3);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalWidget_2->setGeometry(QRect(20, 400, 771, 71));
        horizontalWidget_2->setStyleSheet(QString::fromUtf8("#horizontalWidget_2{\n"
"	background: none;\n"
"\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        amount = new QLineEdit(horizontalWidget_2);
        amount->setObjectName("amount");
        sizePolicy.setHeightForWidth(amount->sizePolicy().hasHeightForWidth());
        amount->setSizePolicy(sizePolicy);
        amount->setStyleSheet(QString::fromUtf8("/* Base style for QLineEdit */\n"
"QLineEdit {\n"
"  border: 1px solid #d0e8ff;\n"
"  border-radius: 8px;\n"
"  background-color: #f0f8ff;\n"
"  padding: 5px 10px;\n"
"  font-size: 16px;\n"
"  color: #333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #9ec8ff;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #0078d7;\n"
"  box-shadow: 0 0 5px rgba(0, 120, 215, 0.5);\n"
"  outline: none;\n"
"}"));

        horizontalLayout_3->addWidget(amount);

        horizontalSpacer_2 = new QSpacerItem(70, 2, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        message = new QLineEdit(horizontalWidget_2);
        message->setObjectName("message");
        sizePolicy.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy);
        message->setStyleSheet(QString::fromUtf8("/* Base style for QLineEdit */\n"
"QLineEdit {\n"
"  border: 1px solid #d0e8ff;\n"
"  border-radius: 8px;\n"
"  background-color: #f0f8ff;\n"
"  padding: 5px 10px;\n"
"  font-size: 16px;\n"
"  color: #333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #9ec8ff;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #0078d7;\n"
"  box-shadow: 0 0 5px rgba(0, 120, 215, 0.5);\n"
"  outline: none;\n"
"}"));

        horizontalLayout_3->addWidget(message);

        progressBar_3 = new QProgressBar(page_3);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setGeometry(QRect(0, 340, 811, 23));
        progressBar_3->setValue(100);
        progressBar_4 = new QProgressBar(page_3);
        progressBar_4->setObjectName("progressBar_4");
        progressBar_4->setGeometry(QRect(0, 500, 811, 23));
        progressBar_4->setValue(100);
        progressBar_5 = new QProgressBar(page_3);
        progressBar_5->setObjectName("progressBar_5");
        progressBar_5->setGeometry(QRect(-120, 50, 1011, 23));
        progressBar_5->setValue(100);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-20, 0, 191, 60));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 35px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 70, 881, 781));
        tabWidget->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        tabWidget->setStyleSheet(QString::fromUtf8("/* General styling for QTabWidget */\n"
"#tabWidget {\n"
"    background-color: transparent; /* Transparent background */\n"
"    border: none; /* Removes outer border */\n"
"    font-family: \"Segoe UI\", sans-serif; /* Modern font */\n"
"    font-size: 14px; /* Standard font size */\n"
"    color: #333; /* Default text color */\n"
"}\n"
"\n"
"/* Styling for the pane (content area) */\n"
"#tabWidget ::pane {\n"
"    border: 1px solid #87CEEB; /* Light blue border */\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px; /* Inner padding for the content area */\n"
"    background: #f0f8ff; /* Light AliceBlue background */\n"
"}\n"
"\n"
"/* Styling for the tabs in the tab bar */\n"
"QTabBar::tab {\n"
"    background: #add8e6; /* LightBlue background for tabs */\n"
"    border: 1px solid #87CEEB; /* Light blue border */\n"
"    padding: 8px 16px; /* Padding for the tabs */\n"
"    border-top-left-radius: 6px; /* Rounded top-left corners */\n"
"    border-top-right-radius: 6px; /* Rounded top-ri"
                        "ght corners */\n"
"    margin-right: 2px; /* Space between tabs */\n"
"    color: #333; /* Darker text for better contrast */\n"
"}\n"
"\n"
"/* Styling for the selected tab */\n"
"QTabBar::tab:selected {\n"
"    background: #ffffff; /* White background for the selected tab */\n"
"    border-color: #4682B4; /* SteelBlue border for the selected tab */\n"
"    color: #000; /* Black text for the selected tab */\n"
"}\n"
"\n"
"/* Styling for the hovered tab */\n"
"QTabBar::tab:hover {\n"
"    background: #87CEFA; /* LightSkyBlue background for hovered tab */\n"
"    color: #111; /* Slightly darker text color when hovered */\n"
"}\n"
"\n"
"/* Styling for unselected tabs */\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* Creates a small gap for unselected tabs */\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        widget = new QWidget(tab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 80, 451, 261));
        widget->setStyleSheet(QString::fromUtf8("#widget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,  /* Gradient direction from top-left to bottom-right */\n"
"        stop: 0 #4a90e2,             /* Light blue at the start (top-left) */\n"
"        stop: 0.5 #1c75bc,           /* Slightly darker blue in the middle */\n"
"        stop: 1 #003f7f              /* Lighter blue at the end (bottom-right) */\n"
"    ); \n"
"    color: #ffffff;                   /* White text for better contrast */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", sans-serif;\n"
"    font-size: 16px;\n"
"    border: none;                     /* Ensure no default borders */\n"
"    border-top-left-radius: 16px;     /* No rounding for top-left corner */\n"
"    border-top-right-radius: 16px;    /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 16px; /* Rounded bottom-right corner */\n"
"    border-bottom-left-radius: 16px;  /* No rounding for bottom-left corner */\n"
"    padding: 12px;                    /* Optional inner spa"
                        "cing */\n"
"    transition: border 0.3s ease;     /* Smooth transition for border changes */\n"
"}\n"
"\n"
"/* Add hover effect */\n"
"#widget:hover {\n"
"    border: 2px solid #89c4f4;        /* A lighter blue border on hover */\n"
"}"));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 101, 91));
        label_4->setStyleSheet(QString::fromUtf8("#label_4{\n"
"	background: none;\n"
"}"));
        Icon_2 = new QLabel(widget);
        Icon_2->setObjectName("Icon_2");
        Icon_2->setGeometry(QRect(280, 10, 371, 251));
        Icon_2->setStyleSheet(QString::fromUtf8("#Icon_2{\n"
"	background: none;\n"
"}"));
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 190, 291, 60));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
"	background: none;\n"
"}\n"
""));
        usernameCard = new QLabel(widget);
        usernameCard->setObjectName("usernameCard");
        usernameCard->setGeometry(QRect(0, 170, 164, 60));
        usernameCard->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"	background: none;\n"
"}\n"
""));
        BalanceCard1 = new QLabel(widget);
        BalanceCard1->setObjectName("BalanceCard1");
        BalanceCard1->setGeometry(QRect(-10, 90, 411, 101));
        BalanceCard1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 50px;\n"
"    font-weight: cursiv; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"background: none;\n"
"}\n"
""));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(520, 20, 281, 60));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 25px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(480, 80, 381, 621));
        listWidget->setStyleSheet(QString::fromUtf8("/* Styling for the listWidget */\n"
"#listWidget {\n"
"    background-color: #f5f5f7; /* Light blue background for a softer tone matching the button */\n"
"    border: none; /* Same blue as the button border */\n"
"    border-radius: 0px; /* Rounded corners to match the button */\n"
"    padding: 10px; /* Inner padding */\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif; /* Matching font */\n"
"    font-size: 16px; /* Slightly smaller font size */\n"
"    font-weight: 500; /* Semi-bold font for a modern look */\n"
"    color: #000; /* Black font for readability */\n"
"}\n"
"\n"
"/* Add padding inside the listWidget to create spacing between scrollbars and content */\n"
"#listWidget::viewport {\n"
"    margin-right: 10px; /* Add space between scrollbar and the list items */\n"
"}\n"
"\n"
"/* List Item Styling */\n"
"#listWidget::item {\n"
"    padding: 10px 14px; /* Padding for individual items */\n"
"    margin: 6px 0; /* Spacing between items */\n"
"    border-ra"
                        "dius: 5px; /* Rounded corners for items */\n"
"    background-color: #ffffff; /* White background for items */\n"
"    color: #000; /* Black font color */\n"
"    font-size: 16px; /* Slightly smaller than the list widget font */\n"
"    font-weight: 500; /* Semi-bold for item text */\n"
"}\n"
"\n"
"#listWidget::item:hover {\n"
"    background-color: #d4e9fc; /* Slightly darker blue on hover */\n"
"    color: #000; /* Keep font black on hover */\n"
"    border: 1px solid #0267bf; /* Slightly darker blue border on hover */\n"
"}\n"
"\n"
"#listWidget::item:selected {\n"
"    background-color: #0586f7; /* Match the button's primary blue for selected items */\n"
"    color: #ffffff; /* White font for contrast */\n"
"    border: 1px solid #0267bf; /* Darker blue border for selected items */\n"
"}\n"
"\n"
"/* Horizontal Scroll Bar */\n"
"QScrollBar:horizontal {\n"
"    border: none;\n"
"    background: #f5f5f5; /* Light gray background for the track */\n"
"    height: 10px; /* Height of the scroll bar */\n"
"    marg"
                        "in: 0px 20px 0px 20px; /* Add spacing at the ends */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #0586f7; /* Blue handle matching the button theme */\n"
"    min-width: 20px; /* Minimum width of the handle */\n"
"    border-radius: 5px; /* Rounded corners for the handle */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
"    border: none;\n"
"    background: none;\n"
"    width: 0px; /* Remove the arrows */\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: none; /* Remove the track fill */\n"
"}\n"
"\n"
"/* Vertical Scroll Bar */\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #f5f5f5; /* Light gray background for the track */\n"
"    width: 10px; /* Width of the scroll bar */\n"
"    margin: 20px 0px 20px 0px; /* Add spacing at the ends */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical"
                        " {\n"
"    background: #0586f7; /* Blue handle matching the button theme */\n"
"    min-height: 20px; /* Minimum height of the handle */\n"
"    border-radius: 5px; /* Rounded corners for the handle */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"    height: 0px; /* Remove the arrows */\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none; /* Remove the track fill */\n"
"}"));
        widget_3 = new QWidget(tab);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 420, 451, 261));
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3{\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,  /* Gradient direction from top-left to bottom-right */\n"
"        stop: 0 #FFD700,             /* Light blue at the start (top-left) */\n"
"        stop: 0.5 #bf8200,           /* Slightly darker blue in the middle */\n"
"        stop: 1 #996800             /* Lighter blue at the end (bottom-right) */\n"
"    ); /*96ceff 96ceff\n"
"    color: #ffffff;                   /* White text for better contrast */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", sans-serif;\n"
"    font-size: 16px;\n"
"    border: none;                     /* Ensure no default borders */\n"
"    border-top-left-radius: 16px;      /* No rounding for top-left corner */\n"
"    border-top-right-radius: 16px;    /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 16px; /* Rounded bottom-right corner */\n"
"    border-bottom-left-radius: 16px;  /* No rounding for bottom-left corner */\n"
"    padding: 12px;                    /* Op"
                        "tional inner spacing */\n"
"}\n"
"#widget_3:hover {\n"
"    border: 2px solid #89c4f4;        /* A lighter blue border on hover */\n"
"}"));
        label_15 = new QLabel(widget_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 10, 101, 91));
        label_15->setStyleSheet(QString::fromUtf8("#label_15{\n"
"	background: none;\n"
"}"));
        Icon_4 = new QLabel(widget_3);
        Icon_4->setObjectName("Icon_4");
        Icon_4->setGeometry(QRect(260, 20, 191, 221));
        Icon_4->setStyleSheet(QString::fromUtf8("#Icon_4{\n"
"	background: none;\n"
"}"));
        label_16 = new QLabel(widget_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(0, 190, 291, 60));
        label_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
"	background: none;\n"
"}\n"
""));
        usernameCard_3 = new QLabel(widget_3);
        usernameCard_3->setObjectName("usernameCard_3");
        usernameCard_3->setGeometry(QRect(0, 170, 164, 60));
        usernameCard_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"	background: none;\n"
"}\n"
""));
        BalanceCard2_2 = new QLabel(widget_3);
        BalanceCard2_2->setObjectName("BalanceCard2_2");
        BalanceCard2_2->setGeometry(QRect(-10, 90, 411, 101));
        BalanceCard2_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 50px;\n"
"    font-weight: cursiv; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"background: none;\n"
"}\n"
""));
        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(0, 20, 351, 60));
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 25px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        label_18 = new QLabel(tab);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(0, 360, 351, 60));
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 25px;\n"
"    font-weight: bold; /* Makes the font bold */\n"
"    font-weight: 600;\n"
"    padding: 10px 22px;\n"
"    border: none;\n"
"    border-radius: 14px;\n"
"    min-height: 40px;\n"
"    min-width: 120px;\n"
"    letter-spacing: 0.4px;\n"
"}\n"
""));
        progressBar_9 = new QProgressBar(tab);
        progressBar_9->setObjectName("progressBar_9");
        progressBar_9->setGeometry(QRect(482, 60, 401, 16));
        progressBar_9->setValue(100);
        progressBar_10 = new QProgressBar(tab);
        progressBar_10->setObjectName("progressBar_10");
        progressBar_10->setGeometry(QRect(0, 60, 451, 16));
        progressBar_10->setValue(100);
        progressBar_11 = new QProgressBar(tab);
        progressBar_11->setObjectName("progressBar_11");
        progressBar_11->setGeometry(QRect(0, 400, 451, 16));
        progressBar_11->setValue(100);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        progressBar_6 = new QProgressBar(page_2);
        progressBar_6->setObjectName("progressBar_6");
        progressBar_6->setGeometry(QRect(-80, 50, 1221, 23));
        progressBar_6->setValue(100);
        stackedWidget->addWidget(page_2);
        DashboardWindow->setCentralWidget(centralwidget);

        retranslateUi(DashboardWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DashboardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DashboardWindow)
    {
        DashboardWindow->setWindowTitle(QCoreApplication::translate("DashboardWindow", "MainWindow", nullptr));
        Icon->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        LabelName->setText(QCoreApplication::translate("DashboardWindow", "Account : Admin", nullptr));
        InfoButton->setText(QCoreApplication::translate("DashboardWindow", "Information", nullptr));
        HomeButton->setText(QCoreApplication::translate("DashboardWindow", "Home", nullptr));
        TransferButton->setText(QCoreApplication::translate("DashboardWindow", "Transfer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DashboardWindow", "Investments", nullptr));
        SignoutButton->setText(QCoreApplication::translate("DashboardWindow", "Sign Out", nullptr));
        pushButton->setText(QCoreApplication::translate("DashboardWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("DashboardWindow", "Information", nullptr));
        textEdit->setHtml(QCoreApplication::translate("DashboardWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:16pt; font-weight:700; color:#020202;\">About:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14pt; color:#020202;\">This project was entirely build and programmed by Niklas using QT Creator, CSS and C++. This is my fir"
                        "st big project in QT hope you like it :). Here you will find all different stuff this application offers.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:14pt; color:#020202;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14pt; color:#020202;\">If you want to mess around with unlimited Money try log in with the Admin account:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14pt; color:#020202;\">username: Admin </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14"
                        "pt; color:#020202;\">password: Admin</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:14pt; color:#020202;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:9pt; color:#020202;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:14pt; color:#020202;\"><br /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DashboardWindow", "Transfer", nullptr));
        label_9->setText(QCoreApplication::translate("DashboardWindow", "From", nullptr));
        combobox->setItemText(0, QCoreApplication::translate("DashboardWindow", "Pingplus Bank", nullptr));
        combobox->setItemText(1, QCoreApplication::translate("DashboardWindow", "American Expresso", nullptr));

#if QT_CONFIG(statustip)
        WhoLineEdit->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label_10->setText(QCoreApplication::translate("DashboardWindow", "To", nullptr));
        label_11->setText(QCoreApplication::translate("DashboardWindow", "Amount", nullptr));
        checkBox->setText(QCoreApplication::translate("DashboardWindow", "Send anonymously", nullptr));
        label_12->setText(QCoreApplication::translate("DashboardWindow", "Enter a message (optional)", nullptr));
        SendButton->setText(QCoreApplication::translate("DashboardWindow", "Send", nullptr));
#if QT_CONFIG(statustip)
        amount->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        amount->setText(QCoreApplication::translate("DashboardWindow", "1$", nullptr));
#if QT_CONFIG(statustip)
        message->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label_3->setText(QCoreApplication::translate("DashboardWindow", "Home", nullptr));
        label_4->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        Icon_2->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("DashboardWindow", "DE76740201004939876676", nullptr));
        usernameCard->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        BalanceCard1->setText(QCoreApplication::translate("DashboardWindow", "125613631$", nullptr));
        label_7->setText(QCoreApplication::translate("DashboardWindow", "Transaction history", nullptr));
        label_15->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        Icon_4->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("DashboardWindow", "DE76740201004939876676", nullptr));
        usernameCard_3->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        BalanceCard2_2->setText(QCoreApplication::translate("DashboardWindow", "68918$", nullptr));
        label_17->setText(QCoreApplication::translate("DashboardWindow", "Pingplus Banking Card", nullptr));
        label_18->setText(QCoreApplication::translate("DashboardWindow", "American Expresso Card", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DashboardWindow", "Cards", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DashboardWindow", "Statistics", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("DashboardWindow", "My Depo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardWindow: public Ui_DashboardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDWINDOW_H
