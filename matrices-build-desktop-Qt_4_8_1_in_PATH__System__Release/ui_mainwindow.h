/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Mar 14 15:13:58 2016
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
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *mat_a;
    QTableWidget *mat_b;
    QTableWidget *result;
    QRadioButton *int_2;
    QRadioButton *float_2;
    QPushButton *accept;
    QPushButton *add;
    QPushButton *mul;
    QPushButton *sub;
    QPushButton *disp;
    QPushButton *exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(709, 529);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mat_a = new QTableWidget(centralWidget);
        if (mat_a->columnCount() < 3)
            mat_a->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mat_a->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mat_a->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mat_a->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (mat_a->rowCount() < 3)
            mat_a->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mat_a->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mat_a->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mat_a->setVerticalHeaderItem(2, __qtablewidgetitem5);
        mat_a->setObjectName(QString::fromUtf8("mat_a"));
        mat_a->setGeometry(QRect(30, 30, 321, 121));
        mat_a->setMaximumSize(QSize(321, 16777215));
        mat_b = new QTableWidget(centralWidget);
        if (mat_b->columnCount() < 3)
            mat_b->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mat_b->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        mat_b->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        mat_b->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        if (mat_b->rowCount() < 3)
            mat_b->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        mat_b->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        mat_b->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        mat_b->setVerticalHeaderItem(2, __qtablewidgetitem11);
        mat_b->setObjectName(QString::fromUtf8("mat_b"));
        mat_b->setGeometry(QRect(380, 30, 321, 121));
        mat_b->setMaximumSize(QSize(321, 16777215));
        result = new QTableWidget(centralWidget);
        if (result->columnCount() < 3)
            result->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        result->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        result->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        result->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        if (result->rowCount() < 3)
            result->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        result->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        result->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        result->setVerticalHeaderItem(2, __qtablewidgetitem17);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(380, 240, 321, 121));
        result->setMaximumSize(QSize(321, 16777215));
        int_2 = new QRadioButton(centralWidget);
        int_2->setObjectName(QString::fromUtf8("int_2"));
        int_2->setGeometry(QRect(40, 180, 116, 22));
        float_2 = new QRadioButton(centralWidget);
        float_2->setObjectName(QString::fromUtf8("float_2"));
        float_2->setGeometry(QRect(40, 210, 116, 22));
        accept = new QPushButton(centralWidget);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setGeometry(QRect(30, 270, 98, 27));
        add = new QPushButton(centralWidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(30, 320, 98, 27));
        mul = new QPushButton(centralWidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(30, 370, 98, 27));
        sub = new QPushButton(centralWidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(160, 320, 98, 27));
        disp = new QPushButton(centralWidget);
        disp->setObjectName(QString::fromUtf8("disp"));
        disp->setGeometry(QRect(160, 270, 98, 27));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(160, 370, 98, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 709, 25));
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
        QTableWidgetItem *___qtablewidgetitem = mat_a->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mat_a->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = mat_a->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = mat_a->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = mat_a->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = mat_a->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = mat_b->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = mat_b->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = mat_b->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = mat_b->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = mat_b->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = mat_b->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = result->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = result->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = result->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = result->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = result->verticalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = result->verticalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        int_2->setText(QApplication::translate("MainWindow", "Integer", 0, QApplication::UnicodeUTF8));
        float_2->setText(QApplication::translate("MainWindow", "Float", 0, QApplication::UnicodeUTF8));
        accept->setText(QApplication::translate("MainWindow", "Accept", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        mul->setText(QApplication::translate("MainWindow", "Multiply", 0, QApplication::UnicodeUTF8));
        sub->setText(QApplication::translate("MainWindow", "Subtract", 0, QApplication::UnicodeUTF8));
        disp->setText(QApplication::translate("MainWindow", "Display", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
