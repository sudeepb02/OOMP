/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Mar 7 13:54:59 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *mno;
    QLineEdit *size;
    QLineEdit *price;
    QPushButton *accept;
    QPushButton *display;
    QPushButton *clear;
    QPushButton *exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(599, 405);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 27, 71, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 66, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 66, 17));
        mno = new QLineEdit(centralWidget);
        mno->setObjectName(QString::fromUtf8("mno"));
        mno->setGeometry(QRect(120, 20, 113, 27));
        size = new QLineEdit(centralWidget);
        size->setObjectName(QString::fromUtf8("size"));
        size->setGeometry(QRect(120, 70, 113, 27));
        price = new QLineEdit(centralWidget);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(120, 130, 113, 27));
        accept = new QPushButton(centralWidget);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setGeometry(QRect(20, 200, 98, 27));
        display = new QPushButton(centralWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(160, 200, 98, 27));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(300, 200, 98, 27));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(440, 200, 98, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 599, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Model No.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Size :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Price :", 0, QApplication::UnicodeUTF8));
        accept->setText(QApplication::translate("MainWindow", "Accept", 0, QApplication::UnicodeUTF8));
        display->setText(QApplication::translate("MainWindow", "Display", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
