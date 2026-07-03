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
    cin >> n >> m;

    char grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int cnt=1;
    for (int j = 0; j < m; j++)
    {
        bool one = false;
        for (int i = 0; i < n; i++)
        {
            if (grid[i][j] == '$')
            {
                one = true;
            }
        }
        if (!one) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}