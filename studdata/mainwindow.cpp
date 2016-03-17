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
        for(int i = 0; i < rowCnt;i++)
        {
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(student[i].rno));
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(student[i].name));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(student[i].intphy));
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(person[i].height, 10)));
            ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(person[i].weight, 10)));
            ui->tableWidget->setItem(i, 5, new QTableWidgetItem(person[i].ipn));
            ui->tableWidget->setItem(i, 6, new QTableWidgetItem(person[i].address));
            ui->tableWidget->setItem(i, 7, new QTableWidgetItem(person[i].phoneNumber));
            ui->tableWidget->setItem(i, 8, new QTableWidgetItem(person[i].dln));
            ui->tableWidget->setItem(i, 9, new QTableWidgetItem(person[i].uen));
        }*/
}
