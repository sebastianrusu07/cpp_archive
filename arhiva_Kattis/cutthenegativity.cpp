#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int list[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> list[i][j];
        }
    }

    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (list[i][j] != -1) cnt++;
        }
    }

    cout << cnt << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (list[i][j] == -1) continue;
            cout << i << " " << j << " " << list[i][j] << '\n';
        }
    }
    return 0;
}