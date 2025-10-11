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
    int n,m;
    cin >> n >> m;
    int matrice[n][m+1];
    for(int i=0;i<n;i++)
    {
        int suma=0;
        for(int j=0;j<m;j++)
        {
            int nr;
            cin >> nr;
            matrice[i][j]=nr;
            suma+=nr;
        }
        matrice[i][m]=suma;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrice[i][m] > matrice[j][m])
            {
                for (int k = 0; k <= m; k++)
                {
                    swap(matrice[i][k], matrice[j][k]);
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

