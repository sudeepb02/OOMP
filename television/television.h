#ifndef TELEVISION_H
#define TELEVISION_H
class television
{
    int price,mno,size;
public:

    television()
    {
        price = mno = size = 0;
    }
    friend class MainWindow;
};

#endif // TELEVISION_H
