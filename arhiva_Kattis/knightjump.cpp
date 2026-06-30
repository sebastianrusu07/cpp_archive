#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;

    char grid[105][105];
    for(int i=0;i<105;i++)
    {
        for(int j=0;j<105;j++)
        {
            grid[i][j]='#';
        }
    }

    int dist[105][105];
    for(int i = 0; i < 105; i++)
    {
        for(int j = 0; j < 105; j++)
        {
            dist[i][j] = -1;
        }
    }


    queue<pair<int,int>> pos;

    for(int i=3;i<=n+2;i++)
    {
        for(int j=3;j<=m+2;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='K')
            {
                pos.push(make_pair(i,j));
                dist[i][j]=0;
            }
        }
    }

    while (!pos.empty())
    {
        int x=pos.front().first;
        int y=pos.front().second;
        pos.pop();

        if(x==3&&y==3)
        {
            cout << dist[3][3];
            return 0;
        }

        if (grid[x+2][y+1]!='#' && dist[x+2][y+1]==-1)
        {
            pos.push(make_pair(x+2,y+1)); dist[x+2][y+1]=dist[x][y]+1;
        }
        if (grid[x+2][y-1]!='#' && dist[x+2][y-1]==-1)
        {
            pos.push(make_pair(x+2,y-1)); dist[x+2][y-1]=dist[x][y]+1;
        }
        if (grid[x-2][y+1]!='#' && dist[x-2][y+1]==-1)
        {
            pos.push(make_pair(x-2,y+1)); dist[x-2][y+1]=dist[x][y]+1;
        }
        if (grid[x-2][y-1]!='#' && dist[x-2][y-1]==-1)
        {
            pos.push(make_pair(x-2,y-1)); dist[x-2][y-1]=dist[x][y]+1;
        }
        if (grid[x+1][y+2]!='#' && dist[x+1][y+2]==-1)
        {
            pos.push(make_pair(x+1,y+2)); dist[x+1][y+2]=dist[x][y]+1;
        }
        if (grid[x+1][y-2]!='#' && dist[x+1][y-2]==-1)
        {
            pos.push(make_pair(x+1,y-2)); dist[x+1][y-2]=dist[x][y]+1;
        }
        if (grid[x-1][y+2]!='#' && dist[x-1][y+2]==-1)
        {
            pos.push(make_pair(x-1,y+2)); dist[x-1][y+2]=dist[x][y]+1;
        }
        if (grid[x-1][y-2]!='#' && dist[x-1][y-2]==-1)
        {
            pos.push(make_pair(x-1,y-2)); dist[x-1][y-2]=dist[x][y]+1;
        }
    }
    cout << -1;
    return 0;
}