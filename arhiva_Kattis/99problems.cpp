#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a=n,b=n;

    int d=0;
    while (a%100!=99 && a>0)
    {
        a--;
        d++;
    }

    int D=0;
    while (b%100!=99)
    {
        b++;
        D++;
    }

    if (d<D && a!=0)
    {
        cout << a;
    }else
    {
        cout << b;
    }
    return 0;
}