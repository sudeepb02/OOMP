#ifndef BOOK_H
#define BOOK_H
#include "bk.h"
#include <QMainWindow>

namespace Ui {
class book;
}

class book : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit book(QWidget *parent = 0);
    ~book();

    bk *b[10];
private slots:
    void on_Accept_clicked();

    void on_Display_clicked();

   int on_Search_clicked();

    void on_Issue_clicked();

private:
    Ui::book *ui;
};

#endif // BOOK_H
