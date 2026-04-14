#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrice[n][n];

    for (int j = 0; j < n; j++) {
        matrice[0][j] = j;
    }

    for (int i = 1; i < n; i++) {
        int temp = matrice[i-1][0];
        for (int j = 0; j < n-1; j++) {
            matrice[i][j] = matrice[i-1][j+1];
        }
        matrice[i][n-1] = temp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrice[i][j] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}