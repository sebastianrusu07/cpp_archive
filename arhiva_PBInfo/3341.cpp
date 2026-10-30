#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

ifstream cin("oaste2.in");
ofstream cout("oaste2.out");

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int arr[105][105];
int maxSoldiers=0;
int minRegions=0;

void Fill(int x,int y)
{
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    int soldiers = arr[x][y];
    int regions = 1;
    arr[x][y] = 0;

    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();

        for (int i=0;i<4;i++)
        {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            int spot = arr[nx][ny];
            if (spot != 0)
            {
                regions++;
                soldiers += arr[nx][ny];
                q.push(make_pair(nx,ny));
                arr[nx][ny] = 0;
            }
        }
    }
    if (maxSoldiers < soldiers)
    {
        maxSoldiers = soldiers;
        minRegions = regions;
    }else if (maxSoldiers == soldiers)
    {
        minRegions = min(regions,minRegions);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    int startX,startY;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]!=0)
            {
                Fill(i,j);
            }
        }
    }
    cout << maxSoldiers << ' ' << minRegions;
    return 0;
}