#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
using namespace std;

ifstream cin("moscraciun5.in");
ofstream cout("moscraciun5.out");

int place[105][105];

int sum(int x,int y)
{
    if (place[x][y]==0)
    {
        return 0;
    }
    int val = place[x][y];
    place[x][y] = 0;
    return val + sum(x-1, y) + sum(x+1, y) + sum(x,y+1) + sum(x,y-1);
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> place[i][j];
        }
    }
    cout << sum(1,1);
    return 0;
}