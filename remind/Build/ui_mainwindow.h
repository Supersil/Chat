/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *txtBox;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QTextBrowser *userList;
    QHBoxLayout *horizontalLayout;
    QLineEdit *loginEdit;
    QPushButton *loginBtn;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *MsgLine;
    QPushButton *sendBtn;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1075, 562);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        txtBox = new QTextBrowser(centralWidget);
        txtBox->setObjectName(QStringLiteral("txtBox"));

        horizontalLayout_3->addWidget(txtBox);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        userList = new QTextBrowser(widget);
        userList->setObjectName(QStringLiteral("userList"));

        gridLayout->addWidget(userList, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loginEdit = new QLineEdit(widget);
        loginEdit->setObjectName(QStringLiteral("loginEdit"));

        horizontalLayout->addWidget(loginEdit);

        loginBtn = new QPushButton(widget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));

        horizontalLayout->addWidget(loginBtn);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        splitter->addWidget(widget);

        horizontalLayout_3->addWidget(splitter);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        MsgLine = new QLineEdit(centralWidget);
        MsgLine->setObjectName(QStringLiteral("MsgLine"));

        horizontalLayout_2->addWidget(MsgLine);

        sendBtn = new QPushButton(centralWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_2->addWidget(sendBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        MsgLine->raise();
        sendBtn->raise();
        txtBox->raise();
        label->raise();
        userList->raise();
        loginEdit->raise();
        loginBtn->raise();
        txtBox->raise();
        userList->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1075, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Chat Client", 0));
        label->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\273\321\216\320\264\320\265\320\271:", 0));
        loginBtn->setText(QApplication::translate("MainWindow", "Login", 0));
        sendBtn->setText(QApplication::translate("MainWindow", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
