#ifndef COMPLEX_H
#define COMPLEX_H
class complex
{
    float real,img;
public:
    complex();
    complex operator +(complex);

    //complex operator -(complex);
      complex operator *(complex);
    complex(float,float);
    friend class MainWindow;
    friend complex operator-(complex,complex);
};

#endif // COMPLEX_H
