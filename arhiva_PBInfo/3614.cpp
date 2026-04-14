#include <cmath>
#include <iostream>
using namespace std;

int cmmdc(int i, int j)
{
    while (j)
    {
        int rest = i%j;
        i=j;
        j=rest;
    }
    return i;
}

int suma(int a,int b)
{
    int CMMDC = cmmdc(a, b),aura=0;
    for (int i=1;i*i<=CMMDC;i++)
    {
        if (CMMDC%i==0)
        {
            int complement = CMMDC/i;
            aura+=i;
            if (i*i!=CMMDC)aura+=complement;
        }
    }
    return aura;
}