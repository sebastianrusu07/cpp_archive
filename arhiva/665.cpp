#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

bool apare(int nr,int c)
{
    while (nr)
    {
        if (nr%10==c)return true;
        nr/=10;
    }
    return false;
}

bool divide(int nr,int c)
{
    return (nr%c==0);
}

int nrBun(int nr)
{
    for (int i=1;i<=9;i++)
    {
        if (apare(nr,i) && !divide(nr,i))return 0;
    }
    return 1;
}

int main()
{
    int a,b;
    cin >> a >> b;

    int counter=0;
    for (int i=a;i<=b;i++)
    {
        counter+=nrBun(i);
    }

    cout << counter;
    return 0;
}
