#include <iostream>
#include <cmath>
using namespace std;

class complex
{
private:
    double R,I;
public:
    complex(double real=0,double img=0)
        : R(real), I(img)
    {};
    void ptr();
    complex operator + (const complex& mid)
    {
        complex tmp;
        tmp.R = R + mid.R; tmp.I = I + mid.I;
        return tmp;
    }
    complex operator - (const complex& mid)
    {
        complex tmp;
        tmp.R = R - mid.R; tmp.I = I - mid.I;
        return tmp;
    }
};

void complex::ptr()
{
    cout<<"("<<R<<","<<I<<")"<<endl;
    return;    
}
/*
complex operator + (complex& mid)
{
    complex tmp;
    tmp.R = R + mid.R; tmp.I = I + mid.I;
    return tmp;
}
*/
