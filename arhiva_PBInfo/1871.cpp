#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
using namespace std;

ifstream cin("ubuph.in");
ofstream cout("ubuph.out");

struct pos
{
    long long x,y,cost;

    bool operator>(const pos& next) const{
        return cost > next.cost;
    }
};

long long cost[1005][1005];
long long minDist[1005][1005];
long long dx[4] = {0,0,-1,1};
long long dy[4]={-1,1,0,0};

#define LIMIT LLONG_MAX

int main()
{
    long long n,m;
    cin>>n>>m;

    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<m;j++)
        {
            cin>>cost[i][j];
            minDist[i][j]=LIMIT;
        }
    }

    long long targetX,targetY,startX,startY;
    cin>>targetX>>targetY>>startX>>startY;
    targetX--;
    targetY--;
    startX--;
    startY--;

    priority_queue<pos,vector<pos>,greater<pos> > q;
    minDist[startX][startY]=cost[startX][startY];
    q.push(pos{startX,startY,cost[startX][startY]});

    while(!q.empty())
    {
        pos p=q.top();
        q.pop();
        long long x=p.x;
        long long y=p.y;

        if (p.cost > minDist[x][y]) continue;
        if (x == targetX && y == targetY) break;

        for (long long k=0;k<4;k++)
        {
            long long nx=x+dx[k];
            long long ny=y+dy[k];

            if (nx < 0 || ny < 0 || nx > n-1 || ny > m-1) continue;

            if(minDist[nx][ny] > minDist[x][y]+cost[nx][ny])
            {
                minDist[nx][ny] = minDist[x][y] + cost[nx][ny];
                q.push(pos{nx,ny,minDist[nx][ny]});
            }
        }
    }
    cout<<minDist[targetX][targetY];
    return 0;
}