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
    int target = matrice[n-1][m-1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ( i==0 || i==n-1 || j==0 || j==m-1) {
                cout << target;
            }else {
                cout << matrice[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}