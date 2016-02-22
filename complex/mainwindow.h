#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "complex.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    complex *n1,*n2,*n3;
    friend class complex;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_calc_clicked();

    void on_disp_clicked();

    void on_exit_clicked();

    void on_sum_clicked();

    void on_addno_clicked();

    void on_pushButton_clicked();

    void on_sub_clicked();

    void on_multiply_clicked();

    void on_clear_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
