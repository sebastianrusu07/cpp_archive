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

int main()
{
    int n;
    cin>>n;

    int maxi=0,sMaxi=0;
    int mini=9,sMini=9;
    while(n)
    {
        int c=n%10;
        if(c>sMaxi)
        {
            if (c>maxi)
            {
                sMaxi=maxi;
                maxi=c;
            }else
            {
                sMaxi=c;
            }
        }
        if(c<sMini)
        {
            if (c<mini)
            {
                sMini=mini;
                mini=c;
            }else
            {
                sMini=c;
            }
        }
        n/=10;
    }
    cout << sMaxi << ' ' << sMini;
    return 0;
}