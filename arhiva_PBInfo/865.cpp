#include <fstream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

ifstream cin("palat.in");
ofstream cout("palat.out");

int distToTarget[1005][1005];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

void init(int n,int m)
{
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=m+1;j++)
        {
            if(i==0 || i==n+1 || j==0 || j==m+1)
            {
                distToTarget[i][j]=-2;
            }else
            {
                distToTarget[i][j]=-1;
            }
        }
    }
}

void search(int startX,int startY)
{
    queue<pair<int,int> > q;
    q.push(make_pair(startX,startY));
    distToTarget[startX][startY]=0;

    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if (distToTarget[nx][ny]==-1)
            {
                distToTarget[nx][ny]=distToTarget[x][y]+1;
                q.push(make_pair(nx,ny));
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    init(n,m);

    int a,b;
    char input[1005][1005];
    vector<pair<int,int> > v;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>input[i][j];
            switch (input[i][j])
            {
                case 'Z':
                    {
                        distToTarget[i][j]=-2;
                        break;
                    }
                case 'F':
                    {
                        v.push_back(make_pair(i,j));
                        break;
                    }
                case 'I':
                    {
                        a=i;
                        b=j;
                        break;
                    }
            }
        }
    }
    reverse(v.begin(),v.end());
    search(a,b);

    int bestX=0,bestY=0,bestDist=m*n+1;
    for (int i=0;i<v.size();i++)
    {
        int x=v[i].first;
        int y=v[i].second;
        if (distToTarget[x][y]>0 && distToTarget[x][y]<bestDist)
        {
            bestDist=distToTarget[x][y];
            bestX=x;
            bestY=y;
        }else if (distToTarget[x][y]==bestDist)
        {
            if (x>bestX || (x==bestX && y>bestY))
            {
                bestDist=distToTarget[x][y];
                bestX=x;
                bestY=y;
            }
        }
    }
    cout<<bestX<<" "<<bestY;
    return 0;
}
