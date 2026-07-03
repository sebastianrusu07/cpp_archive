#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <set>
#include <queue>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> list(n+1);

    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin >> a >> b;
        list[a].push_back(b);
        list[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    vector<int> alreadyVisited(n+1);
    while(!q.empty())
    {
        int house = q.front();
        q.pop();

        alreadyVisited[house] = 1;
        for (int connectedHouse : list[house])
        {
            if(!alreadyVisited[connectedHouse])
            {
                q.push(connectedHouse);
            }
        }
    }

    bool atleastOne=false;
    for (int i = 1; i <= n; i++)
    {
        if(!alreadyVisited[i])
        {
            atleastOne = true;
            cout << i << '\n';
        }
    }
    if(!atleastOne)
    {
        cout << "Connected";
    }
    return 0;
}