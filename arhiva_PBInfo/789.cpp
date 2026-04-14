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
    int maxNr=-1;
    for (const auto &i : map)
    {
        if (i.second>=2 && maxNr<i.first)
        {
            maxNr = i.first;
        }
    }
    if (maxNr==-1)
    {
        cout << "IMPOSIBIL";
    }else
    {
        cout << maxNr;
    }
    return 0;
}

