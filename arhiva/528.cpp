#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n,m;
    unordered_map<int,int> map;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }

    cin >> m;
    for(int i=0;i<m;i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }

    vector<int> reuniune;
    for (const auto &p : map)
    {
        reuniune.push_back(p.first);
    }

    vector<int> inter;
    for (const auto &p : map)
    {
        if (p.second>=2)
        {
            inter.push_back(p.first);
        }
    }

    sort(reuniune.begin(),reuniune.end());
    sort(inter.begin(),inter.end());

    for(int i=0;i<reuniune.size();i++)
    {
        cout<<reuniune[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<inter.size();i++)
    {
        cout<<inter[i]<<" ";
    }
    return 0;
}
