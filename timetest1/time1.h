#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
public:
    int hour;
    int minute;
    int second;

   
    Time(int h = 0, int m = 0, int s = 0);
    
    void setTime(int h, int m, int s);
    //print description of object in hh:mm:ss
    void print();
    //compare two time object
    bool equals(Time);
};
