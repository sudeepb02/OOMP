#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "matrices.h"
#include "qstring.h"
#include "qmessagebox.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    matrix <int> l,m,n;
    matrix <float> x,y,z;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_exit_clicked();

    void on_clear_clicked();

    void on_add_clicked();

    void on_disp_clicked();

    void on_accept_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_int_2_clicked();

    void on_float_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
