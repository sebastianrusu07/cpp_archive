#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> map;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        for(int j=i; j<s.length(); j++)
        {
            map[s.substr(i,j-i+1)]++;
        }
    }

    vector<pair<int,string>> orderedMap;
    for(auto it : map)
    {
        orderedMap.push_back(make_pair(it.second,it.first));
    }

    sort(orderedMap.begin(),orderedMap.end(),[](const auto &a,const auto &b)
    {
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        return a.first>b.first;
    });

    for (auto it : orderedMap)
    {
        cout << it.first << " " << it.second << '\n';
    }
    return 0;
}

