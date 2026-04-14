#include <iostream>
#include <vector>
using namespace std;

int echilibrat(int nr)
{
    bool par = true;
    int sumaPar = 0,sumaImpar=0;
    while (nr)
    {
        if (par)sumaPar+=nr%10;
        if (!par )sumaImpar+=nr%10;
        if (par)par = false;
        else par = true;
        nr = nr/10;
    }
    if (sumaPar%2==0 && sumaImpar%2!=0)return 1;
    return 0;
}