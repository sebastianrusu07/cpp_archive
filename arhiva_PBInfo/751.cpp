#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int matrice[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
        }
    }

    int k;
    cin >> k;
    int nrK[k];
    for (int i = 0; i < k; i++)
    {
        cin >> nrK[i];
    }
    for (int i = 0; i < k; i++)
    {
        int x = nrK[i];
        bool toate = true;
        for (int row = 0; row < n; row++)
        {
            bool current = false;
            for (int col = 0; col < m; col++)
            {
                if (matrice[row][col] == x)
                {
                    current = true;
                    break;
                }
            }
            if (!current)
            {
                toate = false;
                break;
            }
        }

        if (toate)
            cout << "DA\n";
        else
            cout << "NU\n";
    }

    return 0;
}
