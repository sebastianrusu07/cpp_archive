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
    char grid[9][9];
    int knightCount=0;

    for (int i=2;i<=6;i++)
    {
        for (int j=2;j<=6;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='k')
            {
                knightCount++;
            }
        }
    }

    if(knightCount!=9)
    {
        cout << "invalid";
        return 0;
    }
    knightCount=0;

    for (int i=2;i<=6;i++)
    {
        for (int j=2;j<=6;j++)
        {
            if (grid[i][j]=='k')
            {
                grid[i-2][j-1]='#';
                grid[i-2][j+1]='#';
                grid[i-1][j+2]='#';
                grid[i+1][j+2]='#';
                grid[i+2][j+1]='#';
                grid[i+2][j-1]='#';
                grid[i+1][j-2]='#';
                grid[i-1][j-2]='#';
            }
        }
    }


    for (int i=2;i<=6;i++)
    {
        for (int j=2;j<=6;j++)
        {
            if (grid[i][j]=='k') knightCount++;
        }
    }

    cout  << (knightCount == 9 ? "valid" : "invalid");
    return 0;
}