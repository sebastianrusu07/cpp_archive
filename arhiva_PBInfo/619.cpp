#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
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
    for (int i=0; i<n; i++) {
        sort(matrice[i],matrice[i]+m);
    }
    for (int i=0; i<n; i++) {
        for (int y=0; y<m; y++) {
            cout << matrice[i][y] << " ";
        }
        cout << endl;
    }
    return 0;
}