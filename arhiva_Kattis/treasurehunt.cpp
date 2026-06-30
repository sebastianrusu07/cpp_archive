#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    char map[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>map[i][j];
        }
    }

    int x=0,y=0,moves=0;
    while (map[x][y]!='T')
    {
        if(map[x][y]=='N')
        {
            map[x][y]='X';
            x--;
        }else if(map[x][y]=='E')
        {
            map[x][y]='X';
            y++;
        }else if(map[x][y]=='S')
        {
            map[x][y]='X';
            x++;
        }else if(map[x][y]=='W')
        {
            map[x][y]='X';
            y--;
        }

        if (x<0 || x>n-1 || y<0 || y>m-1)
        {
            cout << "Out";
            return 0;
        }
        if (map[x][y]=='X')
        {
            cout << "Lost";
            return 0;
        }

        moves++;
    }
    cout<<moves;
    return 0;
}