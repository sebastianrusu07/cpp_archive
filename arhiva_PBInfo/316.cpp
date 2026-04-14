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
    int small = 99999;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int nr;
            cin >> nr;
            matrice[i][j] = nr;
            small=min(small,nr);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int nr = matrice[i][j];
            if (nr==small) {
                for (int k = 0; k < n; k++) {
                    matrice[k][j] = small;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}