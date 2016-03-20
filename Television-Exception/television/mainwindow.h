#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "television.h"
#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    television t1;
    void operator >>(television&);
    void operator <<(television&);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_exit_clicked();

    void on_clear_clicked();

    void on_accept_clicked();

    void on_display_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
