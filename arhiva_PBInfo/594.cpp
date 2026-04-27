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
#include <iostream>
#include <thread>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int map[105][105];
    for (int i=0;i<105;i++)
    {
        for (int j=0;j<105;j++)
        {
            map[i][j] = 1;
        }
    }

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin >> map[i][j];
        }
    }

    bool changed=false;
    int cnt=0;
    do
    {
        changed=false;
        int previous[105][105];
        for (int i=0;i<n+2;i++)
        {
            for (int j=0;j<m+2;j++)
            {
                previous[i][j] = map[i][j];
            }
        }

        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++)
            {
                int sum=previous[i-1][j] + previous[i+1][j] + previous[i][j+1] + previous[i][j-1];
                if (sum<=2 && map[i][j] == 1)
                {
                    map[i][j] = 0;
                    changed=true;
                }
            }
        }
        cnt++;
    }while (changed);

    bool atleastOne=false;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            if (map[i][j] == 1)
            {
                atleastOne=true;
                break;
            }
        }
    }

    if (atleastOne)
    {
        cout << -1;
    }else
    {
        cout << cnt-1;
    }
    return 0;
}