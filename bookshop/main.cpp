#include <QtGui/QApplication>
#include "book.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    book w;
    w.show();
    
    return a.exec();
}
