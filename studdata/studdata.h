#ifndef STUDDATA_H
#define STUDDATA_H
#include "qstring.h"
class student
{
protected:
    QString name;
    int rno;
public:
    student()
    {
        rno = 0;
    }
    static int index;
    void getdata(int,QString);
    friend class MainWindow;
};
class intdata: public virtual student
{
protected:
    int iphy,ichem,imaths;
public:
    intdata()
    {
        iphy = ichem = imaths = 0;
    }
    void getintdata(int,int,int);
    friend class MainWindow;
};

class extdata:public virtual student
{
protected:
    int ephy,echem,emaths;
public:
    extdata()
    {
        ephy = echem = emaths = 0;
    }
    void getextdata(int,int,int);
    friend class MainWindow;
};

class result:public virtual intdata,extdata
{
    int ptotal,ctotal,mtotal,total;
    float per;
public:
    result()
    {
        ptotal = ctotal=  mtotal = total = 0;
        per = 0.0;
    }
    void calavg();
    friend class MainWindow;
};

#endif // STUDDATA_H
