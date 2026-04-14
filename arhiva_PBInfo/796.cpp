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
            int nr;
            cin >> nr;
            matrice[i][j] = nr;
        }
    }
    for (int i = 0; i < n; i++) {
        bool Nooooo = false;
        for (int j = 0; j < m; j++) {
            if (i!=n-2 && j!=m-2) {
                cout << matrice[i][j] << " ";
                Nooooo = true;
            }
        }
        if (Nooooo) {
            cout << endl;
        }
    }
    return 0;
}