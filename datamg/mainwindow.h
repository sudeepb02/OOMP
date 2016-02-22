#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qstring.h"
#include "qmessagebox.h"
#include <QMainWindow>
#include "datamg.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    datamg *stud[20];
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_accept_clicked();

    void on_display_clicked();

    void on_pushButton_clicked();

    void on_searchno_cursorPositionChanged(int arg1, int arg2);

    void on_search_clicked();

    void on_modify_clicked();

    void on_clear_clicked();

    void on_save_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
