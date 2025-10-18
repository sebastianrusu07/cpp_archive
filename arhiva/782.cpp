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
    int n;
    cin >> n;
    int m=n;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int nr;
            cin >> nr;
            if (j<i && i+j>n-1)
            {
                map[nr]++;
            }
        }
    }
    vector<int> temp;
    for(const auto &it:map)
    {
        if (it.second >= 2)temp.push_back(it.first);
    }
    sort(temp.begin(),temp.end());
    for (const int it:temp)
    {
        cout << it << " ";
    }
    return 0;
}