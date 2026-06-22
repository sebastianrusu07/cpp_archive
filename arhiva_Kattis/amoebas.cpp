#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<string> grid;
    grid.push_back(string(m+2,'.'));
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        grid.push_back('.'+s+'.');
    }
    grid.push_back(string(m+2,'.'));

    vector<pair<int,int>> positionStack;
    int amoebas=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if (grid[i][j]=='#')
            {
                positionStack.push_back(make_pair(i,j));
                amoebas++;

                while (!positionStack.empty())
                {
                    int x=positionStack.back().first,y=positionStack.back().second;
                    positionStack.pop_back();

                    grid[x][y]='/';
                    if (grid[x-1][y]=='#') positionStack.push_back(make_pair(x-1,y));
                    if (grid[x-1][y+1]=='#') positionStack.push_back(make_pair(x-1,y+1));
                    if (grid[x][y+1]=='#') positionStack.push_back(make_pair(x,y+1));
                    if (grid[x+1][y+1]=='#') positionStack.push_back(make_pair(x+1,y+1));
                    if (grid[x+1][y]=='#') positionStack.push_back(make_pair(x+1,y));
                    if (grid[x+1][y-1]=='#') positionStack.push_back(make_pair(x+1,y-1));
                    if (grid[x][y-1]=='#') positionStack.push_back(make_pair(x,y-1));
                    if (grid[x-1][y-1]=='#') positionStack.push_back(make_pair(x-1,y-1));
                }
            }
        }
    }
    cout<<amoebas;
    return 0;
}