#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

ifstream cin("masina.in");
ofstream cout("masina.out");

int main()
{
    int dist,reservoir,stationCount;
    cin>>dist>>reservoir>>stationCount;

    int stations[stationCount+2];
    stations[0]=0;
    for(int i=1;i<=stationCount;i++)
    {
        cin>>stations[i];
    }
    stations[stationCount+1]=dist;
    int lastFuel=0,fuelTimes=0,i=1;
    while (dist - stations[lastFuel] > reservoir)
    {
        if(stations[i]-stations[i-1]>reservoir)
        {
            cout << -1;
            return 0;
        }
        int prevLastFuel = lastFuel;
        while (i<stationCount+2 && stations[i]-stations[lastFuel]<=reservoir)
        {
            i++;
        }
        i--;
        if(i==prevLastFuel)
        {
            cout << -1;
            return 0;
        }
        fuelTimes++;
        lastFuel=i;
    }
    cout<<fuelTimes;
    return 0;
}