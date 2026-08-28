#include <fstream>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int nr,a,b;
    cin >> nr >> b >> a;

    int bCounter=0;
    while (nr%a!=0)
    {
        nr-=b;
        bCounter++;
    }

    int aCounter=nr/a;
    for (int i=0;i<bCounter;i++)
    {
        cout << b << ' ';
    }
    for (int i=0;i<aCounter;i++)
    {
        cout << a << ' ';
    }
    return 0;
}