#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exit_clicked()
{
    this->close();
}


void MainWindow::on_accept_clicked()
{
    s[student::index].getdata(ui->rno->text().toInt(),ui->name->text());

    s[student::index].getintdata(ui->iphy->text().toInt(),ui->ichem->text().toInt(),ui->imaths->text().toInt());

    s[student::index].getextdata(ui->ephy->text().toInt(),ui->echem->text().toInt(),ui->emaths->text().toInt());

    student::index++;

}

void MainWindow::on_display_clicked()
{
    int rowcnt = student::index;
        ui->tableWidget->setRowCount(rowcnt);
        for(int i = 0; i < rowcnt;i++)
        {
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(s[i].rno,10)));
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(s[i].name));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(s[i].iphy,10)));
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(s[i].ichem,10)));
            ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(s[i].imaths, 10)));
            ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(s[i].ephy,10)));
            ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(s[i].echem,10)));
            ui->tableWidget->setItem(i, 7, new QTableWidgetItem(QString::number(s[i].emaths,10)));
            ui->tableWidget->setItem(i, 8, new QTableWidgetItem(QString::number(s[i].ptotal,10)));
            ui->tableWidget->setItem(i, 9, new QTableWidgetItem(QString::number(s[i].ctotal,10)));
            ui->tableWidget->setItem(i, 10, new QTableWidgetItem(QString::number(s[i].mtotal,10)));
            ui->tableWidget->setItem(i,11, new QTableWidgetItem(QString::number(s[i].total,10)));
            ui->tableWidget->setItem(i, 12, new QTableWidgetItem(QString::number(s[i].per,10.2)));

        }
}

void MainWindow::on_clear_clicked()
{

}
