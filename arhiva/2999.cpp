#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n,k,r;
    cin >> n >> k >> r;

    cout << n/2 << endl;

    int y=k*(k+1)/2;
    int suma1=0;
    for(int i=k*(k-1)/2;i<y;i++)
    {
        suma1+=i;
    }

    int x=r*(r+1)/2;
    int suma2=0;
    for (int i=r*(r-1)/2;i<x;i++)
    {
        suma2+=i;
    }

    cout << (suma1+suma2)/(k+r) << endl;

    int st=r*(r-1)/2,dr=st+r-1;
    while(st<=dr)
    {
        cout << st << ' ';
        st++;
        if (st>dr) break;
        cout << st << ' ';
        st++;
        if (st>dr) break;
        cout << dr << ' ';
        dr--;
    }
    return 0;
}

