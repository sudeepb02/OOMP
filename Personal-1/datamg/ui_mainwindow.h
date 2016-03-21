/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Feb 22 14:55:31 2016
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
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
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
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QLineEdit *name;
    QLineEdit *city;
    QLineEdit *rno;
    QComboBox *comboBox;
    QLineEdit *policyno;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *address;
    QLineEdit *mob;
    QPushButton *accept;
    QPushButton *display;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *height;
    QLineEdit *weight;
    QTableWidget *tableWidget;
    QPushButton *search;
    QLineEdit *searchno;
    QPushButton *modify;
    QPushButton *del;
    QPushButton *clear;
    QPushButton *save;
    QPushButton *exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(808, 680);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 66, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 111, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 10, 66, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 50, 101, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 66, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 170, 71, 17));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(110, 120, 110, 27));
        name = new QLineEdit(centralWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(110, 0, 151, 27));
        city = new QLineEdit(centralWidget);
        city->setObjectName(QString::fromUtf8("city"));
        city->setGeometry(QRect(430, 0, 161, 27));
        rno = new QLineEdit(centralWidget);
        rno->setObjectName(QString::fromUtf8("rno"));
        rno->setGeometry(QRect(150, 40, 113, 27));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(470, 40, 78, 27));
        policyno = new QLineEdit(centralWidget);
        policyno->setObjectName(QString::fromUtf8("policyno"));
        policyno->setGeometry(QRect(110, 160, 113, 27));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 90, 81, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 130, 66, 17));
        address = new QTextEdit(centralWidget);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(370, 150, 271, 61));
        mob = new QLineEdit(centralWidget);
        mob->setObjectName(QString::fromUtf8("mob"));
        mob->setGeometry(QRect(110, 80, 151, 27));
        accept = new QPushButton(centralWidget);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setGeometry(QRect(30, 290, 98, 27));
        display = new QPushButton(centralWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(140, 290, 98, 27));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 90, 66, 17));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(470, 80, 78, 27));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 210, 66, 17));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 250, 66, 17));
        height = new QLineEdit(centralWidget);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(110, 200, 113, 27));
        weight = new QLineEdit(centralWidget);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setGeometry(QRect(110, 240, 113, 27));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 370, 791, 192));
        search = new QPushButton(centralWidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(370, 290, 98, 27));
        searchno = new QLineEdit(centralWidget);
        searchno->setObjectName(QString::fromUtf8("searchno"));
        searchno->setGeometry(QRect(420, 240, 241, 27));
        modify = new QPushButton(centralWidget);
        modify->setObjectName(QString::fromUtf8("modify"));
        modify->setGeometry(QRect(490, 290, 98, 27));
        del = new QPushButton(centralWidget);
        del->setObjectName(QString::fromUtf8("del"));
        del->setGeometry(QRect(610, 290, 98, 27));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(90, 330, 98, 27));
        save = new QPushButton(centralWidget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(440, 330, 98, 27));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(560, 330, 98, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 808, 25));
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
        label->setText(QApplication::translate("MainWindow", "Name :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Driving License :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "City :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Blood Group :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "DOB :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Policy No :", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "A+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "A-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "B+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "B-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "AB+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "AB-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "O+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "O-", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("MainWindow", "Mobile No.:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Address :", 0, QApplication::UnicodeUTF8));
        accept->setText(QApplication::translate("MainWindow", "Accept", 0, QApplication::UnicodeUTF8));
        display->setText(QApplication::translate("MainWindow", "Display", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Gender :", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Male", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Female", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("MainWindow", "Height :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Weight :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Dr. Lic. No.", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "City", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Gender", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Mobile", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "DOB", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Policy No.", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Height", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Weight", 0, QApplication::UnicodeUTF8));
        search->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        modify->setText(QApplication::translate("MainWindow", "Modify", 0, QApplication::UnicodeUTF8));
        del->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
