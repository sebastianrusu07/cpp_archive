#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> m >> n;;
    int matrice[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrice[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n / 2; j++) {
            if (matrice[i][j] != matrice[i][n - j - 1]) {
                cout << "NU";
                return 0;
            }
        }
    }

    cout << "DA";
    return 0;
}