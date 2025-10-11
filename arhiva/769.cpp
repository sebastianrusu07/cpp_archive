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

    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < m-i-1 ; j++)
        {
            if (matrice[0][j] > matrice[0][j+1])
            {
                for (int k = 0; k < n; k++)
                {
                    swap(matrice[k][j], matrice[k][j+1]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}