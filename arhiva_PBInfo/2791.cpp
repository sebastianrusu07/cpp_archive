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
    int matrice[n][m];

    int sir[n];
    for (int i = 0; i < n; i++) {
        cin >> sir[i];
    }

    for (int i = 0; i < m; i++) {
        if (i%2==0) {
            for (int j = 0; j < n; j++) {
                matrice[i][j] = sir[n-j-1];
            }
        }else {
            for (int j = 0; j < n; j++) {
                matrice[i][j] = sir[j];
            }
        }

    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}