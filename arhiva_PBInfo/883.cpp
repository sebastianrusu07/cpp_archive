#include <fstream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

ifstream cin("traversare.in");
ofstream cout("traversare.out");

int obstacles[1005][1005];
int pathfind[1005][1005];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

void init(int n,int m,int arr[1005][1005]){
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++){
            int& pos = arr[i][j];
            if(i==0 || j==0 || j==m+1 || i==n+1){
                pos = -2;
            }else{
                pos = -1;
            }
        }
    }
}

void search(int n,int m){
    init(n,m,pathfind);
    queue<pair<int,int>> toCheck;
    for(int i=1;i<=m;i++)
    {
        if (obstacles[n][i]==1) continue;
        pathfind[n][i] = 1;
        toCheck.push(make_pair(n,i));
    }

    while(!toCheck.empty()){
        pair<int,int> pos= toCheck.front();
        int x = pos.first,y=pos.second;
        toCheck.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(pathfind[nx][ny]==-1 && obstacles[nx][ny]==0){
                toCheck.push({nx,ny});
                pathfind[nx][ny] =  pathfind[x][y]+1;
            }
        }
    }
}

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> obstacles[i][j];
        }
    }

    search(n,m);
    int totalBest = 1e8;
    for(int i=1;i<=m;i++)
    {
        if (obstacles[1][i]==0 && pathfind[1][i]!=-1)
        {
            totalBest = min(totalBest,pathfind[1][i]);
        }
    }
    cout << totalBest;
    return 0;
}