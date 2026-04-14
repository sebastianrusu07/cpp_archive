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
    for (int i=n; i>=1; i--)
    {
        for (int j=m; j>=1; j--)
        {
            cout << matrice[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}