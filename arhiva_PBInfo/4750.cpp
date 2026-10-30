#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;

ifstream cin("got_s9.in");
ofstream cout("got_s9.out");

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int northPole[105][105];
int dragonACount = 0;
int dragonBCount = 0;

void Fill(int x,int y,int who)
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
            }else if (spot == 4)
            {
                if (who == 1)
                {
                    dragonACount++;
                }else
                {
                    dragonBCount++;
                }
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

    int AX,AY,BX,BY;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>northPole[i][j];
            if (northPole[i][j]==2)
            {
                AX=i;
                AY=j;
            }else if (northPole[i][j]==3)
            {
                BX=i;
                BY=j;
            }
        }
    }

    Fill(AX,AY,1);
    Fill(BX,BY,2);
    cout << dragonBCount - dragonACount;
    return 0;
}