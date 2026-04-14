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
    int n,m;
    unordered_map<int,int> map;
    cin >> n >> m;
    int matrice[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int nr;
            cin >> nr;
            matrice[i][j] = nr;
            map[nr]++;
        }
    }
    vector<int> app;
    int maxApp=0;
    for (const auto &i : map)
    {
        if (i.second>maxApp)
        {
            maxApp = i.second;
            app.clear();
            app.push_back(i.first);
        }
        if (i.second==maxApp && count(app.begin(),app.end(),i.first)==0) app.push_back(i.first);
    }
    sort(app.begin(),app.end());
    cout << app[app.size()-1] << " ";
    return 0;
}

