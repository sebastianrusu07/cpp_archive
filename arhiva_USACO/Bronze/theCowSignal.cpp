#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

ifstream cin("cowsignal.in");
ofstream cout("cowsignal.out");

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    char grid[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int y2=0;y2<k;y2++)
        {
            for (int j=0;j<m;j++)
            {
                for (int y=0;y<k;y++)
                {
                    cout << grid[i][j];
                }
            }
            cout << '\n';
        }
    }
    cin.close();
    cout.close();
    return 0;
}