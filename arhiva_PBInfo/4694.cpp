#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n+2][m+2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrice[i][j];
        }
    }
    int maxSuma = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < m-1; j++) {
            int suma = matrice[i][j] + matrice[i][j+1] + matrice[i+1][j] + matrice[i+1][j+1];
            if (suma > maxSuma) {
                maxSuma = suma;
            }
        }
    }
    cout << maxSuma;
    return 0;
}