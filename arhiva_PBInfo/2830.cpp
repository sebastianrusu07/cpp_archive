#include <iostream>
using namespace std;

int cmmdc(int x,int y)
{
    while (y)
    {
        int rest = x % y;
        x = y;
        y = rest;
    }
    return x;
}

int DivImpar(int a,int b)
{
    int nr = cmmdc(a,b);
    while(nr%2==0)
    {
        nr/=2;
    }
    return nr;
}