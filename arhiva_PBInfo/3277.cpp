#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int distToA[105][105],distToB[105][105],distToC[105][105],distToEnd[105][105];
int dx[4]={0,0,-1,1},dy[4]={-1,1,0,0};

void init(int n)
{
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=n+1;j++)
        {
            int set = ((i==0 || i==n+1 || j==0 || j==n+1)?-2:-1);
            distToA[i][j]=set;
            distToB[i][j]=set;
            distToC[i][j]=set;
            distToEnd[i][j]=set;
        }
    }
}

void search(int startX,int startY,char selectedTarget)
{
    queue<pair<int,int> > q;
    q.push(make_pair(startX,startY));

    int (*distToTarget)[105] = nullptr;
    switch (selectedTarget)
    {
        case 'A':
            {
                distToTarget = distToA;
                break;
            }
        case 'B':
            {
                distToTarget = distToB;
                break;
            }
        case 'C':
            {
                distToTarget = distToC;
                break;
            }
        case 'D':
            {
                distToTarget = distToEnd;
                break;
            }
    }
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
    int n;
    cin>>n;
    init(n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int accessible;
            cin>>accessible;

            accessible=(accessible==1)?-2:-1;
            distToA[i][j]=accessible;
            distToB[i][j]=accessible;
            distToC[i][j]=accessible;
            distToEnd[i][j]=accessible;
        }
    }

    pair<int,int> targets[4];
    for(int i=0;i<=2;i++)
    {
        pair<int,int> toVisit;
        cin>>toVisit.first>>toVisit.second;
        targets[i]=toVisit;
    }
    targets[3]={n,n};

    for(int i=0;i<=3;i++)
    {
        search(targets[i].first,targets[i].second,char('A'+i));
    }

    int (*D[3])[105] = {distToA, distToB, distToC}; //all possible permutations
    int perm[3] = {0, 1, 2};
    long long best = LLONG_MAX;

    do {
        int a = perm[0], b = perm[1], c = perm[2];
        long long cost = D[a][1][1]
                       + D[a][targets[b].first][targets[b].second]
                       + D[b][targets[c].first][targets[c].second]
                       + D[c][n][n];
        best = min(best, cost);
    } while (next_permutation(perm, perm + 3));

    cout << best;
    return 0;
}