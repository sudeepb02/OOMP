#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"
void validation();
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

complex::complex()
{
    real = img = 0;

}
complex::complex(float real,float img)
{
    this->real = real;
    this->img = img;
}
complex complex::operator +(complex no)
{
    return complex(this->real + no.real,this->img + no.img);
}
complex complex::operator *(complex no)
{
    complex temp;
    temp.real = this->real*no.real + this->img*no.img;
    temp.img = this->real*no.img - no.real*this->img;
    return temp;
}
complex operator -(complex no1,complex no2)
{
    complex temp;
    temp.real = no1.real - no2.real;
    temp.img = no1.img - no2.img;
    return temp;
}

void MainWindow::on_exit_clicked()
{

    this->close();
}

void MainWindow::on_addno_clicked()
{
    if(ui->r1->text().isEmpty() || ui->r2->text().isEmpty() || ui->r2->text().isEmpty() || ui->i2->text().isEmpty())
    {
        QMessageBox::information(this,"Invalid","Please enter a number");
    }
    n3 = new complex;
    n1 = new complex(ui->r1->text().toFloat(),ui->i1->text().toFloat());
    n2 = new complex(ui->r2->text().toFloat(),ui->i2->text().toFloat());

    *n3 = *n1 + *n2;
    QString r,i;
    r = QString::number(n3->real,10.2);
    i = QString::number(n3->img,10.2);
    ui->r3->setText(r);
    ui->i3->setText(i);
}

void MainWindow::on_sub_clicked()
{
    if(ui->r1->text().isEmpty() || ui->r2->text().isEmpty() || ui->r2->text().isEmpty() || ui->i2->text().isEmpty())
    {
        QMessageBox::information(this,"Invalid","Please enter a number");
    }
    n3 = new complex;
    n1 = new complex(ui->r1->text().toFloat(),ui->i1->text().toFloat());
    n2 = new complex(ui->r2->text().toFloat(),ui->i2->text().toFloat());

    *n3 = operator -(*n1,*n2);
    QString r,i;
    r = QString::number(n3->real,10.2);
    i = QString::number(n3->img,10.2);
    ui->r3->setText(r);
    ui->i3->setText(i);

}

void MainWindow::on_multiply_clicked()
{
    if(ui->r1->text().isEmpty() || ui->r2->text().isEmpty() || ui->r2->text().isEmpty() || ui->i2->text().isEmpty())
    {
        QMessageBox::information(this,"Invalid","Please enter a number");
    }
    n3 = new complex;
    n1 = new complex(ui->r1->text().toFloat(),ui->i1->text().toFloat());
    n2 = new complex(ui->r2->text().toFloat(),ui->i2->text().toFloat());

    *n3 = *n1 * *n2;
    QString r,i;
    r = QString::number(n3->real,10.2);
    i = QString::number(n3->img,10.2);
    ui->r3->setText(r);
    ui->i3->setText(i);
}

void MainWindow::on_clear_clicked()
{
    ui->r1->clear();
    ui->i1->clear();
    ui->r2->clear();
    ui->i2->clear();
    ui->r3->clear();
    ui->i3->clear();
}
