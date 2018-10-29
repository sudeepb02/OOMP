#ifndef WEATHER_H
#define WEATHER_H

class weather{
    static float th;
    static float tl;
    static float tr;
    static float ts;
float high_temp,low_temp,amtrain,amtsnow;
    static int cnt;
int day;
public:
 weather();
 void getdata(int,float,float,float,float);
 void average();
 friend class weather_r;
};

#endif // WEATHER_H
