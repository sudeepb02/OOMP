#ifndef DATAMG_H
#define DATAMG_H
class datamg
{
    QString name,city,bloodg,dob,addr,gender;
    int rno,mob,policyno;
    float height,weight;
    static int totalno;
public:
    datamg();
    void accept(QString,QString,QString,QString,QString,QString,int,int,int,float,float);

    friend class MainWindow;

};

#endif // DATAMG_H
