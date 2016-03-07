#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"
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

void MainWindow::on_clear_clicked()
{
    ui->mno->clear();
    ui->size->clear();
    ui->price->clear();
}

void MainWindow::on_accept_clicked()
{
    this->operator >>(t1);

}
void MainWindow::operator >>(television &t1)
{
    t1.mno = ui->mno->text().toInt();
    t1.price = ui->price->text().toInt();
    t1.size = ui->size->text().toInt();
    int flag=0;
    flag = t1.mno/9999;
    try
    {
        if(ui->mno->text()==NULL || ui->price->text()==NULL || ui->size->text()==NULL)
        {
            throw 0;
        }
        if(t1.size<12 || t1.size>70)
        {
            throw 2;
        }
        if(t1.price<0 || t1.price>5000)
        {
            throw 1;
        }
        if(flag>=1)
        {
            throw 3;
        }
    }
    catch(int x)
    {
        if(x==0)
        {
            QMessageBox::information(this,"Error","Please enter values");
        }
        if(x==1)
        {
            QMessageBox::information(this,"Price Error","Error : Please enter valid price");
            t1.price = 0;
            ui->price->setFocus();
        }
        if(x==2)
        {
            QMessageBox::information(this,"Size Error","Error : Please enter valid size");
            t1.size = 0;
            ui->size->setFocus();
        }
        if(x==3)
        {
            QMessageBox::information(this,"Invalid Model","Please enter valid model number");
            t1.mno = 0;
            ui->mno->setFocus();
        }
    }

}

void MainWindow::operator <<(television &t1)
{
    QString m = QString::number(t1.mno);
    QString s = QString::number(t1.size);
    QString p = QString::number(t1.price);

    QMessageBox::information(this,"Television Output","Model:\t "+m+"\nSize:\t"+s+"\nPrice:\t"+p);
}

void MainWindow::on_display_clicked()
{
    this->operator <<(t1);
}
