#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

ifstream cin("moscraciun.in");
ofstream cout("moscraciun.out");

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int northPole[105][105];
int elfCount = 0;

void Fill(int x,int y)
{
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    northPole[x][y] = 0;

    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();

        for (int i=0;i<4;i++)
        {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            int spot = northPole[nx][ny];
            if (spot == 1)
            {
                q.push(make_pair(nx,ny));
                northPole[nx][ny] = 0;
            }else if (spot == 3)
            {
                elfCount++;
                q.push(make_pair(nx,ny));
                northPole[nx][ny] = 0;
            }
        }
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
            cin>>northPole[i][j];
            if (northPole[i][j]==2)
            {
                startX=i;
                startY=j;
            }
        }
    }

    Fill(startX,startY);
    cout<<elfCount;
    return 0;
}