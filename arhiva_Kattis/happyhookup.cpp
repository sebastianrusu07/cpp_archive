#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n+1);
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }

    int a,b;
    cin>>a>>b;

    vector<int> routeA,routeB;
    routeA.push_back(a);
    routeB.push_back(b);

    vector<int> visitedA(n+1),visitedB(n+1);
    while (routeA.size()>0)
    {
        int routePos = routeA[0];
        routeA.erase(routeA.begin());
        visitedA[routePos] = 1;

        for (int i : v[routePos])
        {
            if(!visitedA[i])
            {
                routeA.push_back(i);
            }
        }
    }

    while (routeB.size()>0)
    {
        int routePos = routeB[0];
        routeB.erase(routeB.begin());
        visitedB[routePos] = 1;

        for (int i : v[routePos])
        {
            if(!visitedB[i])
            {
                routeB.push_back(i);
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        if (visitedA[i] && visitedB[i])
        {
            cout << "yes\n" << i;
            return 0;
        }
    }
    cout << "no\n";
    return 0;
}