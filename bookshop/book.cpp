#include "book.h"
#include "ui_book.h"
#include "qmessagebox.h"

book::book(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::book)
{
    ui->setupUi(this);
}

book::~book()
{
    delete ui;
}
bk::bk(){

}

void bk::getdata(QString a,QString t,QString pb,int pr,int st){
    this->author=a;
    this->title=t;
    this->publisher=pb;
    this->price=pr;
    this->stock=st;
}

int bk::cnt;




void book::on_Accept_clicked()
{
    QString p,q,r;
    int s,t;
    p=ui->lineEdit->text();
    q=ui->lineEdit_2->text();
    r=ui->lineEdit_3->text();
    s=ui->lineEdit_4->text().toInt();
    t=ui->lineEdit_5->text().toInt();



    if(ui->lineEdit->text().isEmpty()||ui->lineEdit_2->text().isEmpty()||ui->lineEdit_3->text().isEmpty()||ui->lineEdit_4->text().isEmpty()||ui->lineEdit_5->text().isEmpty()){
         QMessageBox::information(this,"Validation","Please write a data");
}
    b[bk::cnt]=new bk;

        b[bk::cnt++]->getdata(p,q,r,s,t);


    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();

      ui->Issue->setDisabled(1);
}

void book::on_Display_clicked()
{
    QString p,q,r,s,t;


ui->tableWidget->setRowCount(bk::cnt);
for(int i=0;i<bk::cnt;i++){
    p=b[i]->author;
    q=b[i]->title;
    r=b[i]->publisher;
    s=QString::number(b[i]->price,10);
    t=QString::number(b[i]->stock,10);



    ui->tableWidget->setItem(i,0,new QTableWidgetItem(p));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem(q));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem(r));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem(s));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem(t));


  ui->Issue->setDisabled(1);

}
}

int book::on_Search_clicked()
{
    QString p,q;
    int i,flag,foundIndex;
    p=ui->lineEdit_6->text();
    q=ui->lineEdit_7->text();
    if(ui->lineEdit_6->text().isEmpty()||ui->lineEdit_7->text().isEmpty()){
        QMessageBox::information(this,"Validation","Please write a data");

    }

    for(i=0;i<bk::cnt;i++)
    {
        if(p==b[i]->author && q==b[i]->title)
        {
             flag=1;
    foundIndex=i;
             break;
        }
        else
        {
                flag=0;


        }
    }
       if(flag==1)
       {

           QMessageBox::information(this,"validation","book found");
       ui->Issue->setEnabled(1);

       for(int j=0;j<5;j++){
       ui->tableWidget->item(foundIndex,j)->setBackground(QBrush(QColor(255,255,0,150)));
       }

       return i;
       }
       else
       { QMessageBox::information(this,"validation","book not found");
            ui->Issue->setDisabled(1);
            return 0;
       }
}

void book::on_Issue_clicked()
{QString p,q,r,s,t;
static int cntr=0;

    int a=on_Search_clicked();

int c,d;
   c=ui->lineEdit_8->text().toInt();

if(c<=b[a]->stock)
{

    QMessageBox::information(this,"Validation","Stock is available");

      d=c*b[a]->price;

     QMessageBox::information(this,"Validation","Total price"+ QString::number(d,10));

ui->tableWidget_2->setRowCount(10);

p=b[a]->author;
q=b[a]->title;
r=b[a]->publisher;
s=QString::number(d,10);
t=QString::number(c,10);



ui->tableWidget_2->setItem(cntr,0,new QTableWidgetItem(p));
ui->tableWidget_2->setItem(cntr,1,new QTableWidgetItem(q));
ui->tableWidget_2->setItem(cntr,2,new QTableWidgetItem(r));
ui->tableWidget_2->setItem(cntr,3,new QTableWidgetItem(s));
ui->tableWidget_2->setItem(cntr,4,new QTableWidgetItem(t));

 ui->lineEdit_6->clear();
  ui->lineEdit_7->clear();
   ui->lineEdit_8->clear();

ui->Issue->setDisabled(1);


cntr++;

 b[a]->stock=b[a]->stock-c;

}

else
{
     QMessageBox::information(this,"Validation","Stock is not available");
}

}
