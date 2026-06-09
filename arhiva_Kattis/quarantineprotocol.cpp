#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'X')
            {
                int tempi=i;
                while (tempi>=0 && arr[tempi][j] != '#')
                {
                    arr[tempi][j] = 'x';
                    tempi--;
                }

                tempi = i;
                while (tempi<n && arr[tempi][j] != '#')
                {
                    arr[tempi][j] = 'x';
                    tempi++;
                }
            }
        }
    }

    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'O' || arr[i][j] == '#') cnt++;
        }
    }
    cout << cnt;
    return 0;
}