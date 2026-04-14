#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    vector<int> full;
    for(int i=0;i<n;i++)
    {
        unordered_map<int,int> map;
        vector<int> vec;
        int nr;
        while(cin>>nr && nr)
        {
            map[nr]++;
            vec.push_back(nr);
        }
        if (map.size()==26)
        {
            v.push_back(vec);
            full.push_back(i);
        }
    }
    int k=0,cnt=0,size=full.size();
    while(size>1)
    {
        int smallest=v[0][k];
        for (int j=1;j<full.size();j++)
        {
            if (v[j][k]<smallest)
            {
                smallest=v[j][k];
                full.erase(full.begin()+j);
                size--;
            }
        }
        k++;
        for (auto it : full)
        {
            cout << it+1 << " ";
        }
        cout<<endl;
    }
    return 0;
}