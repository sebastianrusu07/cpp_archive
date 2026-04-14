#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

bool prim(int n)
{
    if (n==1)return false;
    if (n==2)return true;
    if (n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    int n,m;
    cin>>n>>m;

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int nr;
            cin>>nr;
            if (j%2==0)
            {
                continue;
            }
            if (prim(nr))
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}