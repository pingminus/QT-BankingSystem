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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
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
    QPushButton *InfoButton;
    QPushButton *HomeButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *SignoutButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QWidget *page_3;
    QLabel *label_8;
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
    QProgressBar *progressBar;
    QLabel *label_7;
    QListWidget *listWidget;
    QWidget *tab_2;
    QWidget *tab_3;

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
        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 60, 901, 501));
        textBrowser->setStyleSheet(QString::fromUtf8("/* General styling for the body */\n"
"body {\n"
"    margin: 0;\n"
"    padding: 0;\n"
"    font-family: Arial, sans-serif;\n"
"    background-color: #f5f5f5;\n"
"    color: #333;\n"
"}\n"
"\n"
"/* Styling for headers */\n"
"h1, h2, h3 {\n"
"    color: #444;\n"
"    margin-bottom: 10px;\n"
"}\n"
"\n"
"/* Buttons */\n"
"button {\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    background-color: #007BFF;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"button:hover {\n"
"    background-color: #0056b3;\n"
"}\n"
"\n"
"/* Links */\n"
"a {\n"
"    color: #007BFF;\n"
"    text-decoration: none;\n"
"}\n"
"\n"
"a:hover {\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"/* Tables */\n"
"table {\n"
"    border-collapse: collapse;\n"
"    width: 100%;\n"
"}\n"
"\n"
"table, th, td {\n"
"    border: 1px solid #ddd;\n"
"}\n"
"\n"
"th, td {\n"
"    padding: 8px;\n"
"    text-align: left;\n"
"}\n"
"\n"
"th {\n"
"    background-color: #f2f2f2;\n"
"}\n"
""
                        "\n"
"/* Form elements */\n"
"input, textarea, select {\n"
"    width: 100%;\n"
"    padding: 10px;\n"
"    margin: 5px 0;\n"
"    display: inline-block;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 4px;\n"
"    box-sizing: border-box;\n"
"}\n"
"\n"
"/* Text alignment */\n"
".text-center {\n"
"    text-align: center;\n"
"}\n"
"\n"
".text-right {\n"
"    text-align: right;\n"
"}\n"
"\n"
".text-left {\n"
"    text-align: left;\n"
"}\n"
"\n"
"/* Containers */\n"
".container {\n"
"    margin: 0 auto;\n"
"    padding: 20px;\n"
"    max-width: 1200px;\n"
"    background-color: white;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);\n"
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
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"    background-color: none;\n"
"    border: none;\n"
"    font-family: Segoe UI, sans-serif;\n"
"    font-size: 14px;\n"
"    color: none;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #87CEEB; /* Light blue border */\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    background: #f0f8ff; /* AliceBlue background */\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: #add8e6; /* LightBlue background for tabs */\n"
"    border: 1px solid #87CEEB; /* Light blue border */\n"
"    padding: 8px 16px;\n"
"    border-top-left-radius: 6px;\n"
"    border-top-right-radius: 6px;\n"
"    margin-right: 2px;\n"
"    color: #333; /* Darker text for contrast */\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    background: transparent; /* Makes the tab content area transparent */\n"
"    border: none; /* Removes the border around the content area */\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #ffffff; /* White background for selected tab */\n"
"    border-color: #4682B4; /* SteelBlue"
                        " border for selected tab */\n"
"    color: #000; /* Black text for selected tab */\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #87CEFA; /* LightSkyBlue background when hovered */\n"
"    color: #111; /* Slightly darker text color when hovered */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        widget = new QWidget(tab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 10, 451, 261));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,  /* Gradient direction from top-left to bottom-right */\n"
"        stop: 0 #4a90e2,             /* Light blue at the start (top-left) */\n"
"        stop: 0.5 #1c75bc,           /* Slightly darker blue in the middle */\n"
"        stop: 1 #003f7f             /* Lighter blue at the end (bottom-right) */\n"
"    ); /*96ceff 96ceff\n"
"    color: #ffffff;                   /* White text for better contrast */\n"
"    font-family: \"Segoe UI\", \"Helvetica Neue\", sans-serif;\n"
"    font-size: 16px;\n"
"    border: none;                     /* Ensure no default borders */\n"
"    border-top-left-radius: 16px;      /* No rounding for top-left corner */\n"
"    border-top-right-radius: 16px;    /* Rounded top-right corner */\n"
"    border-bottom-right-radius: 16px; /* Rounded bottom-right corner */\n"
"    border-bottom-left-radius: 16px;  /* No rounding for bottom-left corner */\n"
"    padding: 12px;                    /* Opti"
                        "onal inner spacing */\n"
"}"));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 101, 91));
        label_4->setStyleSheet(QString::fromUtf8("#label_4{\n"
"	background: none;\n"
"}"));
        Icon_2 = new QLabel(widget);
        Icon_2->setObjectName("Icon_2");
        Icon_2->setGeometry(QRect(250, 10, 391, 221));
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
        BalanceCard1 = new QLabel(tab);
        BalanceCard1->setObjectName("BalanceCard1");
        BalanceCard1->setGeometry(QRect(490, 90, 411, 101));
        BalanceCard1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: black;\n"
"    font-family: \"San Francisco\", \"Helvetica Neue\", \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-size: 50px;\n"
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
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(0, 290, 861, 20));
        progressBar->setValue(100);
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 300, 251, 60));
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
        listWidget->setGeometry(QRect(10, 360, 841, 351));
        listWidget->setStyleSheet(QString::fromUtf8("/* Styling for the listWidget */\n"
"#listWidget {\n"
"    background-color: #e9f3fe; /* Light blue background for a softer tone matching the button */\n"
"    border: 1px solid #0586f7; /* Same blue as the button border */\n"
"    border-radius: 14px; /* Rounded corners to match the button */\n"
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
""
                        "    border-radius: 10px; /* Rounded corners for items */\n"
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
"    height: 10px; /* Height of the scroll bar *"
                        "/\n"
"    margin: 0px 20px 0px 20px; /* Add spacing at the ends */\n"
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
"QScrollBar::h"
                        "andle:vertical {\n"
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
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
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
        label->setText(QString());
        LabelName->setText(QCoreApplication::translate("DashboardWindow", "Account : Admin", nullptr));
        InfoButton->setText(QCoreApplication::translate("DashboardWindow", "Information", nullptr));
        HomeButton->setText(QCoreApplication::translate("DashboardWindow", "Home", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DashboardWindow", "Transactions", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DashboardWindow", "Investments", nullptr));
        SignoutButton->setText(QCoreApplication::translate("DashboardWindow", "Sign Out", nullptr));
        pushButton->setText(QCoreApplication::translate("DashboardWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("DashboardWindow", "Information", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("DashboardWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; color:#020202;\">About:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#020202;\">This project was entirely build and programmed by Niklas using QT Creator, CSS and C++. This is my first big project in QT hope you like it :). Here"
                        " you will find all different stuff this application offers.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#020202;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#020202;\">If you want to mess around with unlimited Money try log in with the Admin account:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#020202;\">username: Admin </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#020202;\">password: Admin</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; m"
                        "argin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#020202;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#020202;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#020202;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#020202;\"><br /></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DashboardWindow", "Investments", nullptr));
        label_3->setText(QCoreApplication::translate("DashboardWindow", "Home", nullptr));
        label_4->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        Icon_2->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("DashboardWindow", "DE76740201004939876676", nullptr));
        usernameCard->setText(QCoreApplication::translate("DashboardWindow", "TextLabel", nullptr));
        BalanceCard1->setText(QCoreApplication::translate("DashboardWindow", "125613631$", nullptr));
        label_7->setText(QCoreApplication::translate("DashboardWindow", "Card history", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DashboardWindow", "Credit Card", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DashboardWindow", "Giro Card", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("DashboardWindow", "My Depo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardWindow: public Ui_DashboardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDWINDOW_H
