#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
#include <iostream>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n,m;
char a[1005][1005];

int bfs(int startX, int startY, int stopX, int stopY)
{
    vector<vector<int>> dist(n, vector<int>(m, -1));
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

    int startX,startY,mewX,mewY,endX,endY;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c;
            cin>>c;
            switch(c)
            {
                case 'A' :
                {
                    a[i][j] = '-';
                    startX=i;
                    startY=j;
                    break;
                }
                case 'M' :
                {
                    a[i][j] = '-';
                    mewX=i;
                    mewY=j;
                    break;
                }
                case 'G' :
                {
                    a[i][j] = '-';
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

    int toPokemon = bfs(startX,startY,mewX,mewY);
    int toEnemy = bfs(mewX,mewY,endX,endY);

    cout << toPokemon + toEnemy;
    return 0;
}