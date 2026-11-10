#include <fstream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

ifstream cin("lac.in");
ofstream cout("lac.out");

int pathfind[1005][1005];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n,m;

void init(int arr[1005][1005]){
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

int fill(int startX,int startY){

    queue<pair<int,int>> toCheck;
    toCheck.push({startX,startY});
    pathfind[startX][startY] = 0;
    bool isPeninsula = false;
    while(!toCheck.empty()){
        pair<int,int> pos= toCheck.front();
        int x = pos.first,y=pos.second;
        toCheck.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(pathfind[nx][ny]==1){
                toCheck.push({nx,ny});
                pathfind[nx][ny] = 0;
            }else if (pathfind[nx][ny]==-2)
            {
                isPeninsula = true;
            }
        }
    }
    return (isPeninsula?2:1);
}

int main()
{
    cin >> n >> m;
    init(pathfind);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> pathfind[i][j];
        }
    }

    int peninsulas=0,islands=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if (pathfind[i][j]==1)
            {
                int ans = fill(i,j);
                if (ans == 2)
                {
                    peninsulas++;
                }else
                {
                    islands++;
                }
            }
        }
    }
    cout << islands << ' ' << peninsulas;
    return 0;
}