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
    int maxSuma=0,indice=0;
    for (int i = 0; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < m; j++) {
            int nr = matrice[i][j];
            if (nr%2 == 0) {
                suma += nr;
            }
        }
        if (suma > maxSuma) {
            maxSuma = suma;
            indice = i;
        }
    }
    cout << indice+1;
    return 0;
}