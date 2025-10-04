#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;
    int m = n;
    int matrice[n+2][m+2];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            matrice[i][j] = i+j;
        }
    }

    for (int i = 2; i < n; i++) {
        for (int j = 2; j < m; j++) {
            matrice[i][j] = matrice[i-1][j-1]+matrice[i-1][j]+matrice[i-1][j+1];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}