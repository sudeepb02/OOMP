#include "mainwindow.h"
#include "ui_mainwindow.h"

int srch;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->name->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}
datamg::datamg()
{
    rno = mob = policyno = 0;
    height = weight = 0;
}
void datamg::accept(QString name,QString city,QString dob,QString bloodg,QString addr,QString gender,int rno,int mob,int policyno,float height,float weight)
{
    this->name = name;
    this->city = city;
    this->dob = dob;
    this->bloodg = bloodg;
    this->addr = addr;
    this->gender = gender;
    this->rno = rno;
    this->mob = mob;
    this->policyno = policyno;
    this->height = height;
    this->weight = weight;
}
int datamg::totalno=0;

void MainWindow::on_accept_clicked()
{
    QString name,city,dob,bloodg,addr,gender;
    int rno,mob,policyno;
    float height,weight;
    name = ui->name->text();
    city = ui->city->text();
    dob = ui->dateEdit->text();
    bloodg = ui->comboBox->currentText();
    addr = ui->address->toPlainText();
    gender = ui->comboBox_2->currentText();
    rno = ui->rno->text().toInt();
    mob = ui->mob->text().toInt();
    policyno = ui->policyno->text().toInt();
    height = ui->height->text().toFloat();
    weight = ui->weight->text().toFloat();

    stud[datamg::totalno] = new datamg();
    stud[datamg::totalno]->accept(name,city,dob,bloodg,addr,gender,rno,mob,policyno,height,weight);
    datamg::totalno++;

    ui->name->clear();
    ui->city->clear();
    ui->dateEdit->clear();
    ui->address->clear();
    ui->rno->clear();
    ui->mob->clear();
    ui->policyno->clear();
    ui->height->clear();
    ui->weight->clear();
}

void MainWindow::on_display_clicked()
{
    int no = datamg::totalno;
    ui->tableWidget->setRowCount(no);
    QString r,m,p,ht,wt;
    for(int i=0;i<no;i++)
    {

        r = QString::number(stud[i]->rno,10);
        m = QString::number(stud[i]->mob,10);
        p = QString::number(stud[i]->policyno,10);
        ht = QString::number(stud[i]->height,10.0,2);
        wt = QString::number(stud[i]->weight,10.0,2);

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(r));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(stud[i]->name));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(stud[i]->city));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(stud[i]->gender));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(stud[i]->addr));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(m));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(stud[i]->dob));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(p));
        ui->tableWidget->setItem(i,8,new QTableWidgetItem(ht));
        ui->tableWidget->setItem(i,9,new QTableWidgetItem(wt));
    }

}

void MainWindow::on_search_clicked()
{
    int no=datamg::totalno;
    int i;
    int searchno = ui->searchno->text().toInt();
    for(i=0;i<no;i++)
    {
        if(searchno==stud[i]->rno)
        {
            QMessageBox::information(this,"Found","Record found successfully");
        }
        else
        {
            QMessageBox::information(this,"Error","Data not found");
        }
    }
    srch = i;


}
void MainWindow::on_modify_clicked()
{
    on_search_clicked();
    int i = srch;
    QString r = QString::number(stud[i]->rno,10);
    QString m = QString::number(stud[i]->mob,10);
    QString p = QString::number(stud[i]->policyno,10);
    QString ht = QString::number(stud[i]->height,10.0,2);
    QString wt = QString::number(stud[i]->weight,10.0,2);


    ui->name->setText(stud[i]->name);
    ui->city->setText(stud[i]->city);
    ui->address->setText(stud[i]->addr);
    ui->height->setText(ht);
    ui->weight->setText(wt);
    ui->policyno->setText(p);
    ui->mob->setText(m);
    ui->rno->setText(r);
    ui->name->setFocus();

}

void MainWindow::on_clear_clicked()
{
    ui->name->clear();
    ui->city->clear();
    ui->dateEdit->clear();
    ui->address->clear();
    ui->rno->clear();
    ui->mob->clear();
    ui->policyno->clear();
    ui->height->clear();
    ui->weight->clear();

}

void MainWindow::on_save_clicked()
{
    QString name,city,dob,bloodg,addr,gender;
    int rno,mob,policyno;
    float height,weight;
    name = ui->name->text();
    city = ui->city->text();
    dob = ui->dateEdit->text();
    bloodg = ui->comboBox->currentText();
    addr = ui->address->toPlainText();
    gender = ui->comboBox_2->currentText();
    rno = ui->rno->text().toInt();
    mob = ui->mob->text().toInt();
    policyno = ui->policyno->text().toInt();
    height = ui->height->text().toFloat();
    weight = ui->weight->text().toFloat();

    stud[srch]->accept(name,city,dob,bloodg,addr,gender,rno,mob,policyno,height,weight);

    on_display_clicked();
    for(int j=0;j<10;j++)
    {
        ui->tableWidget->item(srch,j)->setBackground(QBrush(QColor(0,0,255,150)));
    }
}

void MainWindow::on_exit_clicked()
{
    this->close();
}
