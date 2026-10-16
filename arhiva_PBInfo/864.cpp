#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

ifstream cin("roboti.in");
ofstream cout("roboti.out");

struct pos
{
    int steps,x,y;
};

int distFromStart[1001][1001];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> distFromStart[i][j];
            if(distFromStart[i][j]==1) distFromStart[i][j]=-1;
        }
    }

    int startX,startY;
    cin>>startX>>startY;
    startX--;
    startY--;

    vector<pos> q;
    q.push_back(pos{1,startX,startY});
    distFromStart[startX][startY]=1;

    while (!q.empty())
    {
        pos curr = q.front();
        q.erase(q.begin());

        int x = curr.x,y = curr.y, dist = curr.steps;
        if (x>=1 && distFromStart[x-1][y]==0)
        {
            distFromStart[x-1][y] = dist+1;
            q.push_back(pos{dist+1,x-1,y});
        }
        if (x<=n-1 && distFromStart[x+1][y]==0)
        {
            distFromStart[x+1][y] = dist+1;
            q.push_back(pos{dist+1,x+1,y});
        }
        if (y>=1 && distFromStart[x][y-1]==0)
        {
            distFromStart[x][y-1] = dist+1;
            q.push_back(pos{dist+1,x,y-1});
        }
        if (y<=m-1 && distFromStart[x][y+1]==0)
        {
            distFromStart[x][y+1] = dist+1;
            q.push_back(pos{dist+1,x,y+1});
        }
    }

    int targetX,targetY;
    cin>>targetX>>targetY;
    targetX--;
    targetY--;

    if (distFromStart[targetX][targetY]==-1)
    {
        cout << -1;
        return 0;
    }

    cout<<distFromStart[targetX][targetY]-1;
    return 0;
}