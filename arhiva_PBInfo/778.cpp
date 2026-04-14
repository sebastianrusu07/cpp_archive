#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;
    vector<int> sirSortat;
    vector<int> sir;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int nr;
            cin>>nr;
            if (i==0 || i==n-1 || j==0 || j==m-1)
            {
                sir.push_back(nr);
            }
        }
    }
    for(int i=0;i<sir.size();i++)
    {
        int nr=sir[i];
        auto locatie = find(sirSortat.begin(),sirSortat.end(),nr);
        if(locatie==sirSortat.end())
        {
            sirSortat.push_back(nr);
        }
    }
    sort(sirSortat.begin(),sirSortat.end());
    for(int i=0;i<sirSortat.size();i++)
    {
        cout<<sirSortat[i]<<" ";
    }
    return 0;
}

