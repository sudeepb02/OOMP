#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "matrices.cpp"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->accept->setDisabled(1);
    ui->disp->setDisabled(1);
    ui->mul->setDisabled(1);
    ui->add->setDisabled(1);
    ui->sub->setDisabled(1);
    ui->transa->setDisabled(1);
    ui->transb->setDisabled(1);
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

}

void MainWindow::on_add_clicked()
{
    ui->disp->setEnabled(1);
    if(ui->int_2->isChecked()){
        n = l.add(m);
    }
    else
    {
        z = x.add(y);
    }
}

void MainWindow::on_disp_clicked()
{
    if(ui->int_2->isChecked()){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                ui->result->setItem(i,j,new QTableWidgetItem(QString::number(n.mat[i][j],10)));
            }
        }
    }
    else
    {
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                ui->result->setItem(i,j,new QTableWidgetItem(QString::number(z.mat[i][j],10,2)));
            }
        }

    }
}

void MainWindow::on_accept_clicked()
{
    ui->add->setEnabled(1);
    ui->sub->setEnabled(1);
    ui->mul->setEnabled(1);
    ui->transa->setEnabled(1);
    ui->transb->setEnabled(1);
    ui->disp->setEnabled(1);

    if(ui->int_2->isChecked()){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                l.mat[i][j] = ui->mat_a->item(i,j)->text().toInt();
                m.mat[i][j] = ui->mat_b->item(i,j)->text().toInt();
            }
        }
    }
    else
    {
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                x.mat[i][j] = ui->mat_a->item(i,j)->text().toFloat();
                y.mat[i][j] = ui->mat_b->item(i,j)->text().toFloat();
            }
        }
    }

}

void MainWindow::on_sub_clicked()
{
    ui->disp->setEnabled(1);
    if(ui->int_2->isChecked()){
        n = l.subtract(m);
    }
    else
    {
        z = x.subtract(y);
    }

}

void MainWindow::on_mul_clicked()
{
    ui->disp->setEnabled(1);
    if(ui->int_2->isChecked()){
        n = l.multiply(m);
    }
    else
    {
        z = x.multiply(y);
    }
}

void MainWindow::on_int_2_clicked()
{
    ui->accept->setEnabled(1);
}

void MainWindow::on_float_2_clicked()
{
    ui->accept->setEnabled(1);
}

void MainWindow::on_transa_clicked()
{
    if(ui->int_2->isChecked()){
        n = l.transpose();
    }
    else
    {
        z = x.transpose();
    }
}

void MainWindow::on_transb_clicked()
{
    if(ui->int_2->isChecked()){
        n = m.transpose();
    }
    else
    {
        z = y.transpose();
    }
}
