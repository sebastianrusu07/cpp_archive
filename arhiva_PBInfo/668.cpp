#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n][m];
    for (int i=0; i<n; i++) {
        for (int y=0; y<m; y++) {
            cin >> matrice[i][y];
        }
    }
    int counter=0;
    for (int i=1; i<n; i++) {
        for (int y=1; y<m; y++) {
            if (matrice[i-1][y]!=matrice[i][y]) {
                break;
            }
            if (y==m-1) {
                counter++;
            }
        }
    }
    cout << counter;
    return 0;
}