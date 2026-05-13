#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;

    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if (x1<=a && a<=x2 && y1<=b && b<=y2)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}