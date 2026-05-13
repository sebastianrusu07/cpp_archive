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
    int n,m;
    cin >> n >> m;

    int len=n*m;
    unordered_map<string,int> map;
    for(int i=0;i<len;i++)
    {
        string item;
        cin >> item;
        map[item]++;
    }

    vector<string> v;
    for (auto it:map)
    {
        if(it.second==n)
        {
            v.push_back(it.first);
        }
    }
    sort(v.begin(),v.end());
    cout << v.size() << '\n';
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << '\n';
    }
    return 0;
}