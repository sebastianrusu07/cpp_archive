#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
using namespace std;

ifstream cin("soarece2.in");
ofstream cout("soarece2.out");

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char directions[] = {'S','N','E','V'};
int n,m;
char a[1005][1005];
int dist[1005][1005];

void displayPath(int x,int y)
{
    if (dist[x][y]==0)
    {
        return;
    }
    int target = dist[x][y]-1;
    for (int k=0;k<4;k++)
    {
        int nx = x+dx[k];
        int ny = y+dy[k];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] != '#' && target >= 0 && dist[nx][ny]==target)
        {
            displayPath(nx,ny);
            cout << directions[k];
            return;
        }
    }
}

int bfs(int startX, int startY, int stopX, int stopY)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            dist[i][j] = -1;
        }
    }
    queue<pair<int, int>> q;

    dist[startX][startY] = 0;
    q.push({startX, startY});

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == stopX && y == stopY)
            return dist[x][y];

        for (int d = 0; d < 4; d++)
        {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if (a[nx][ny] != '#' && dist[nx][ny] == -1)
                {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    return -1;
}


int main()
{
    cin>>n>>m;

    int startX,startY,endX,endY;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c;
            cin>>c;
            switch(c)
            {
                case 'S' :
                {
                    a[i][j] = '_';
                    startX=i;
                    startY=j;
                    break;
                }
                case 'B' :
                {
                    a[i][j] = '_';
                    endX=i;
                    endY=j;
                    break;
                }
                default :
                {
                    a[i][j]=c;
                }
            }
        }
    }

    int distance = bfs(startX,startY,endX,endY);
    if(distance==-1)
    {
        cout << 0;
        return 0;
    }
    cout<<distance<<endl;
    displayPath(endX,endY);
    return 0;
}