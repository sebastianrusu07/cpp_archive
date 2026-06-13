#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    char map[n][m];
    int locations=0;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> map[i][j];
        }
    }

    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if (map[i][j]=='O') continue;

            if (map[i-1][j]!='O') continue;
            if (map[i-1][j+1]!='O') continue;
            if (map[i][j+1]!='O') continue;
            if (map[i+1][j+1]!='O') continue;
            if (map[i+1][j]!='O') continue;
            if (map[i+1][j-1]!='O') continue;
            if (map[i][j-1]!='O') continue;
            if (map[i-1][j-1]!='O') continue;
            locations++;
            x=i+1,y=j+1;
        }
    }

    if (locations==0)
    {
        cout << "Oh no!";
        return 0;
    }

    if (locations>1)
    {
        cout << "Oh no! " << locations << " locations";
        return 0;
    }

    cout << x << ' ' << y;
    return 0;
}