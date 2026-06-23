#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> regions;
    for(int i=0;i<n;i++)
    {
        int population;
        cin>>population;
        regions.push_back(population);
    }

    sort(regions.begin(),regions.end());

    int minCitiesToLose=n/2+(n%2!=0),votes=0;
    for(int i=0;i<n;i++)
    {
        if (i>=minCitiesToLose)
        {
            votes+=regions[i];
        }else
        {
            votes+=regions[i]/2;
        }
    }
    cout<<votes;
    return 0;
}