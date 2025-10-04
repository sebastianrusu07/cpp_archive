#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrice[25][25];
    int num = n * m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrice[i][j] = num;
            num--;
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