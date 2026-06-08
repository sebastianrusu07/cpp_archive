#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool doSwap(string a,string b)
{
    for (int i=0;i<min(a.length(),b.length());i++)
    {
        if (a[i]==b[i]) continue;
        if (a[i]>b[i]) return true;
        return false;
    }
    return a.length()>b.length();
}

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

    for(int i=0; i<orderedMap.size(); i++)
    {
        for(int j=i+1; j<orderedMap.size(); j++)
        {
            if (orderedMap[i].first < orderedMap[j].first)
            {
                swap(orderedMap[i],orderedMap[j]);
            }else
            {
                if (orderedMap[i].first == orderedMap[j].first)
                {
                    if(doSwap(orderedMap[i].second,orderedMap[j].second))
                    {
                        swap(orderedMap[i],orderedMap[j]);
                    }
                }
            }
        }
    }

    for (auto it : orderedMap)
    {
        cout << it.first << " " << it.second << '\n';
    }
    return 0;
}

