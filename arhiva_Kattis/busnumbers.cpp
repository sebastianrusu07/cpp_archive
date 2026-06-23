#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int busStopsAt[1005];

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int busNumber;
        cin>>busNumber;
        busStopsAt[busNumber]=1;
    }

    for(int i=1;i<=1000;i++)
    {
        if(busStopsAt[i]==1 && busStopsAt[i+1]==1 && busStopsAt[i+2]==1)
        {
            cout<<i<<'-';
            while (busStopsAt[i]==1)
            {
                i++;
            }
            i--;
            cout<<i<<' ';
        }else if(busStopsAt[i]==1)
        {
            cout<<i<<' ';
        }
    }
    return 0;
}