#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> temps;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        temps.push_back(nr);
    }

    int d=0,smallestTemp=41;
    for(int i=0;i<n-2;i++)
    {
        int maxTemp=max(temps[i],temps[i+2]);
        if(maxTemp<smallestTemp)
        {
            smallestTemp=maxTemp;
            d=i;
        }
    }
    cout<< d+1 << ' ' << smallestTemp << '\n';
    return 0;
}