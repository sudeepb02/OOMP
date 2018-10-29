#ifndef WEATHER_R_H
#define WEATHER_R_H
#include "weather.h"
#include <QMainWindow>

namespace Ui {
class weather_r;
}

class weather_r : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit weather_r(QWidget *parent = 0);
    ~weather_r();
  int no;
    weather w[32];
    
private slots:
    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_2_activated(const QString &arg1);

    void on_pushButton_4_clicked();

private:
    Ui::weather_r *ui;
};

#endif // WEATHER_R_H
