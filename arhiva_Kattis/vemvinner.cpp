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
    char grid[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>grid[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        if (grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i])
        {
            if(grid[0][i]=='X')
            {
                cout<<"Johan har vunnit";
                return 0;
            }else if(grid[0][i]=='O')
            {
                cout << "Abdullah har vunnit";
                return 0;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        if (grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2])
        {
            if(grid[i][0]=='X')
            {
                cout<<"Johan har vunnit";
                return 0;
            }else if(grid[i][0]=='O')
            {
                cout << "Abdullah har vunnit";
                return 0;
            }
        }
    }

    if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2])
    {
        if(grid[0][0]=='X')
        {
            cout<<"Johan har vunnit";
            return 0;
        }else if(grid[0][0]=='O')
        {
            cout << "Abdullah har vunnit";
            return 0;
        }
    }

    if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])
    {
        if(grid[0][2]=='X')
        {
            cout<<"Johan har vunnit";
            return 0;
        }else if(grid[0][2]=='O')
        {
            cout << "Abdullah har vunnit";
            return 0;
        }
    }

    cout << "ingen har vunnit";
    return 0;
}