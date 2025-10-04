#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m=n;
    int matrice[n][m];
    for (int j = 0; j < m; j++) {
        cin >> matrice[0][j];
    }
    for (int i = 1; i < n; i++) {
        int temp=matrice[i-1][m-1];
        for (int j = 1; j < m; j++) {
            matrice[i][j] = matrice[i-1][j-1];
        }
        matrice[i][0]=temp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}