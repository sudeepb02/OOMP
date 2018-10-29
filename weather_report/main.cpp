#include <QtWidgets>
#include "weather_r.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    weather_r w;
    w.show();
    
    return a.exec();
}
