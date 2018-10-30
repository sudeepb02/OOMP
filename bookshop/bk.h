#ifndef BK_H
#define BK_H
#include "qstring.h"
class bk{
QString author,title,publisher;
int price;
int stock;
static int cnt;
static int cntr;
public:
bk();
void getdata(QString,QString,QString,int,int);
friend class book;
};

#endif // BK_H
