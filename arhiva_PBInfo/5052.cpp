#include <iostream>
using namespace std;

int cmmdc(int a,int b)
{
    while (b>0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int cmmmc(int a,int b)
{
    return a/cmmdc(a,b)*b;
}

void depozit(int a,int b,int c,int& n)
{
    n=cmmmc(a,cmmmc(b,c));
}