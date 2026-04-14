#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrice[22][22];

    for (int i = 1; i <= n; i++) {
        matrice[i][1] = i;
    }

    for (int j = 1; j <= n; j++) {
        matrice[n][j] = n;
    }

    for (int j = 2; j <= n; j++) {
        for (int i = 1; i < n; i++) {
            matrice[i][j] = matrice[i][j-1] + matrice[i+1][j-1];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}