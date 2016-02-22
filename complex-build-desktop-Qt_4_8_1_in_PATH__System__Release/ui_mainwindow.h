/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jan 7 14:36:36 2016
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
    QLineEdit *r1;
    QLineEdit *i1;
    QLineEdit *r2;
    QLineEdit *i2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *r3;
    QLineEdit *i3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *exit;
    QPushButton *addno;
    QPushButton *sub;
    QLabel *label_9;
    QPushButton *multiply;
    QPushButton *clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(624, 469);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 71, 17));
        r1 = new QLineEdit(centralWidget);
        r1->setObjectName(QString::fromUtf8("r1"));
        r1->setGeometry(QRect(110, 40, 113, 27));
        i1 = new QLineEdit(centralWidget);
        i1->setObjectName(QString::fromUtf8("i1"));
        i1->setGeometry(QRect(290, 40, 113, 27));
        r2 = new QLineEdit(centralWidget);
        r2->setObjectName(QString::fromUtf8("r2"));
        r2->setGeometry(QRect(110, 110, 113, 27));
        i2 = new QLineEdit(centralWidget);
        i2->setObjectName(QString::fromUtf8("i2"));
        i2->setGeometry(QRect(290, 110, 113, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 120, 71, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 190, 71, 17));
        r3 = new QLineEdit(centralWidget);
        r3->setObjectName(QString::fromUtf8("r3"));
        r3->setGeometry(QRect(110, 180, 113, 27));
        i3 = new QLineEdit(centralWidget);
        i3->setObjectName(QString::fromUtf8("i3"));
        i3->setGeometry(QRect(290, 180, 113, 27));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 0, 41, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 0, 66, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 40, 21, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 120, 21, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 190, 21, 17));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(510, 280, 98, 27));
        addno = new QPushButton(centralWidget);
        addno->setObjectName(QString::fromUtf8("addno"));
        addno->setGeometry(QRect(20, 280, 98, 27));
        sub = new QPushButton(centralWidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(140, 280, 98, 27));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 240, 91, 17));
        multiply = new QPushButton(centralWidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        multiply->setGeometry(QRect(260, 280, 98, 27));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(390, 280, 98, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 624, 25));
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
        label->setText(QApplication::translate("MainWindow", "Number 1 :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Number 2 :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Result :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Real", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Imaginary", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        addno->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        sub->setText(QApplication::translate("MainWindow", "Subtract", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Calculate :", 0, QApplication::UnicodeUTF8));
        multiply->setText(QApplication::translate("MainWindow", "Multiply", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
