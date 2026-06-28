#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int kids;
    cin>>kids;

    unordered_set<string> usedApps;
    for(int i=0;i<kids;i++)
    {
        int nrOfApps;
        cin>>nrOfApps;

        string selectedApp;
        for(int j=0;j<nrOfApps;j++)
        {
            string app;
            cin>>app;

            if (selectedApp.empty() && usedApps.count(app)==0)
            {
                selectedApp=app;
                usedApps.insert(app);
            }
        }
        cout<<selectedApp<<' ';
    }
    return 0;
}