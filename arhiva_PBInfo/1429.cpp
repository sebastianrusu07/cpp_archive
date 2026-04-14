#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    m = n;
    int matrice[n+1][m+1];
    for (int i=1; i<=n; i++)
    {
        matrice[1][i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i+j<n+1)
            {
                matrice[i][j] = matrice[i-1][j]+1;
            }
            if (i+j>n+1)
            {
                matrice[i][j] = matrice[i-1][j]-1;
            }
            if (i+j==n+1)
            {
                matrice[i][j] = n;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}