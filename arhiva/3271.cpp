#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int n;
    cin>>n;

    int maxC=0,first=1,second=2;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        int c=cmmdc(x,y);
        if (c>maxC)
        {
            first=x;
            second=y;
            maxC=c;
        }
        if (c==maxC && x+y>first+second)
        {
            first=x;
            second=y;
        }
    }
    cout << first << " " << second;
    return 0;
}