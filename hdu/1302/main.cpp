// Project name : 1302 ( The Snail ) 
// File name    : main.cpp
// Author       : Izumu
// Date & Time  : Sun Jul  8 19:11:58 2012

#include <iostream>
using namespace std;

double H,U,D,F,height;

/**************************************************************/
int Days()
{
    int day = 1;
    double step = U * F / 100;
    height = 0;
    while(true)
    {
        height += (U-D);
        if (height >= H) return day;
        else if(height < 0) return -day;
        U -= step;
        if(U<0) U = 0;
        day++;
    }
}

/**************************************************************/
int main()
{
    while (cin >> H >> U >> D >> F && H)
    {
        int day = Days();
        if(day > 0) cout << "success on day " << day - 1 << endl;
        else cout << "failure on day " << -day << endl;
    }
    return 0;
}


// end 
// ism 

