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
    cin >> n >> m;

    char grid[n][m];
    string construct;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> grid[i][j];
            if (grid[i][j]!='.') construct.push_back(grid[i][j]);
        }
    }
    cout<<construct;
    return 0;
}