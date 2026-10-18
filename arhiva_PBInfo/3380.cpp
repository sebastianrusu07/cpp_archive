#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
using namespace std;

ifstream cin("castel2.in");
ofstream cout("castel2.out");

struct pos
{
    int x,y,dist;
};

int n,m,k;
int castle[1005][1005];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void fillBadSlots(int x,int y)
{
    queue<pos> q;
    q.push(pos{x,y,0});
    while(!q.empty())
    {
        pos curr = q.front();
        q.pop();

        if (curr.dist > k) continue;

        castle[curr.x][curr.y] = -1;
        for (int i=0;i<4;i++)
        {
            int nx = curr.x+dx[i];
            int ny = curr.y+dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m || castle[nx][ny] == -1)
            {
                continue;
            }

            if (curr.dist < k)
            {
                q.push(pos{nx,ny,curr.dist+1});
                castle[nx][ny] = -1;
            }
        }
    }
}

int main()
{
    cin>>n>>m>>k;

    vector<pair<int,int>> patientZero;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            char c;
            cin>>c;
            if (c == '#')
            {
                castle[i][j] = -2;
            }else if (c == 'Z')
            {
                patientZero.push_back({i,j});
                castle[i][j] = 0;
            }else
            {
                castle[i][j] = 0;
            }
        }
    }

    queue<pos> infection;
    for (auto curr : patientZero)
    {
        castle[curr.first][curr.second] = -1;
        infection.push(pos{curr.first,curr.second,0});
    }

    while(!infection.empty())
    {
        pos curr = infection.front();
        infection.pop();

        if (curr.dist == k) continue;

        for (int i=0;i<4;i++)
        {
            int nx = curr.x+dx[i];
            int ny = curr.y+dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m || castle[nx][ny] != 0)
            {
                continue;
            }

            castle[nx][ny] = -1;
            infection.push(pos{nx,ny,curr.dist+1});
        }
    }

    queue<pos> q;
    if (castle[0][0] == 0)
    {
        castle[0][0] = 1;
        q.push(pos{0,0,1});
    }

    while(!q.empty())
    {
        pos curr = q.front();
        q.pop();

        for (int i=0;i<4;i++)
        {
            int nx = curr.x+dx[i];
            int ny = curr.y+dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m || castle[nx][ny] != 0)
            {
                continue;
            }

            castle[nx][ny] = curr.dist+1;
            q.push(pos{nx,ny,curr.dist+1});
        }
    }

    if (castle[n-1][m-1] <= 0)
    {
        cout << -1;
        return 0;
    }

    cout << castle[n-1][m-1];
    return 0;
}