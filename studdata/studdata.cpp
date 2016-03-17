#include "studdata.h"
#include "qstring.h"
int student::index;
void intdata::getintdata(int ip,int ic,int im)
{
    iphy = ip;
    ichem = ic;
    imaths  = im;
}
void extdata::getextdata(int ep,int ec,int em)
{
    ephy = ep;
    echem = ec;
    emaths = em;
}
void student::getdata(int rno,QString name)
{
    this->name = name;
    this->rno = rno;
}
