#include <iostream>
#include <string>
using namespace std;

int main() {

    int n,m;
    cin >> n;
    m = n;
    int matrice[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i==j || i+j == n-1) {
                matrice[i][j] = 0;
            }else {
                if (i<j && i+j<n-1) {
                    matrice[i][j] = 1;
                }else {
                    if (i>j && i+j>n-1) {
                        matrice[i][j] = 2;
                    }else {
                        matrice[i][j] = 3;
                    }

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

