#include "weather_r.h"
#include "ui_weather_r.h"
#include "weather.h"
#include "qmessagebox.h"

weather_r::weather_r(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::weather_r)
{
    ui->setupUi(this);
}

weather_r::~weather_r()
{
    delete ui;
}


weather::weather(){
    day=99;
    high_temp=999;
    low_temp=-999;
    amtrain=0;
    amtsnow=0;

}

void weather::getdata(int a,float b,float c,float d,float e){

    this->day=a;
    this->high_temp=b;
    this->low_temp=c;
    this->amtrain=d;
    this->amtsnow=e;
            th+=high_temp;
            tl+=low_temp;
            tr+= amtrain;
            ts+=amtsnow;
            cnt++;
}

void weather::average(){

   th=(float)th/cnt;
   tl=(float)tl/cnt;
   tr=(float)tr/cnt;
   ts=(float)ts/cnt;
}



void weather_r::on_pushButton_clicked()
{
int p, q,r,s,t;
QString tp;
p=ui->comboBox_2->currentText().toInt();

if(ui->comboBox->currentText()==NULL){
    QMessageBox::information(this,"validation","please select a month");
}
//p=ui->lineEdit->text().toFloat();

 q=ui->lineEdit_2->text().toFloat();
 r=ui->lineEdit_3->text().toFloat();
 s=ui->lineEdit_4->text().toFloat();
 t=ui->lineEdit_5->text().toFloat();
 if(ui->lineEdit_2->text().isEmpty()||ui->lineEdit_3->text().isEmpty()||ui->lineEdit_4->text().isEmpty()||ui->lineEdit_5->text().isEmpty()){
      QMessageBox::information(this,"validation","please select a data");
 }
 w[p].getdata(p,q,r,s,t);

 //ui->lineEdit->clear();
 ui->lineEdit_2->clear();
 ui->lineEdit_3->clear();
 ui->lineEdit_4->clear();
 ui->lineEdit_5->clear();

}

float weather::th;
float weather::tl;
float weather::tr;
float weather::ts;
int weather::cnt;

void weather_r::on_pushButton_2_clicked()
{   ui->tableWidget->setRowCount(31);
    QString p,q,r,s,t;

     for (int i=0 ;i<31;i++){
    p=QString::number(w[i+1].day,10);
    q=QString::number(w[i+1].high_temp,2.2);
    r=QString::number(w[i+1].low_temp,2.2);
    s=QString::number(w[i+1].amtrain,2.2);
    t=QString::number(w[i+1].amtsnow,2.2);

    ui->tableWidget->setItem(i,0,new QTableWidgetItem(p));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem(q));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem(r));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem(s));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem(t));
}
}

void weather_r::on_pushButton_3_clicked()
{   w[0].average();
    ui->tableWidget_2->setRowCount(2);
    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString::number(weather::th,2.2)));
     ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString::number(weather::tl,2.2)));
      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString::number(weather::tr,2.2)));
       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString::number(weather::ts,2.2)));
}



void weather_r::on_comboBox_activated(const QString &arg1)
{
    QString dis,mnth;
    ui->comboBox_2->clear();
    ui->comboBox->setDisabled(1);
    int year=ui->lineEdit->text().toInt();
    mnth=arg1;
    if(mnth=="January" || mnth=="March"|| mnth=="May"|| mnth=="July"|| mnth=="August"|| mnth=="October"|| mnth=="December"){
        no=31;
    }
    else if(mnth=="February"){
        if(year%4==0)
        no=29;
        else
            no=28;
    }
    else{
        no=30;
    }

    for(int i=1;i<=no;i++){
        ui->comboBox_2->addItem(QString::number(i,10),"");
    }

}


void weather_r::on_comboBox_2_activated(const QString &arg1)
{

}

void weather_r::on_pushButton_4_clicked()
{
    this->close();
}
