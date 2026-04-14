#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

bool isPP(int nr)
{
    int root = sqrt(nr);
    if (root*root == nr)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<pair<int,int>> addIns;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (!isPP(nr))
        {
            addIns.push_back(make_pair(nr,i));
        }else
        {
            v.push_back(nr);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < addIns.size(); i++)
    {
        v.insert(v.begin() + addIns[i].second, addIns[i].first);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}