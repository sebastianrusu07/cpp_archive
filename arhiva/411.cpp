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

    int cnt=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=i;j<=n;j++)
        {
            if (cmmdc(i,j)==1)cnt++;
        }
    }
    cout<<cnt;
    return 0;
}