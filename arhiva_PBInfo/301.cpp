#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
#include <cctype>
using namespace std;

ifstream cin("frecventa1.in");
ofstream cout("frecventa1.out");

unordered_map<int,int>map;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }

    vector<pair<int,int>> v;
    for (auto i : map)
    {
        v.push_back(make_pair(i.second,i.first));
    }

    for (int i=0;i<v.size();i++)
    {
        for (int j=i+1; j<v.size(); j++)
        {
            if (v[i].first<v[j].first)
            {
                swap(v[i],v[j]);
            }else
            {
                if (v[i].first==v[j].first && v[i].second>v[j].second)
                {
                    swap(v[i],v[j]);
                }
            }
        }
    }

    for (int i=0;i<v.size();i++)
    {
        cout << v[i].second << " ";
    }
    return 0;
}