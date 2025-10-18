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
        for (int j=1; j<=m; j++)
        {
            cin >> matrice[i][j];
        }
    }
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i!=1)
        {
            suma+=matrice[i][i-1];
        }
        if (i!=n)
        {
            suma+=matrice[i][i+1];
        }
    }
    cout << suma;
    return 0;
}