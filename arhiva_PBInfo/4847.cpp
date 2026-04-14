#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
#include <cctype>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[51][51];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if (i!=0 && i!=n-1) continue;
        for(int j=0;j<m-2;j++)
        {
            if (a[i][j]+a[i][j+1]+a[i][j+2]==0)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}