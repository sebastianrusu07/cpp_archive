#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,r,k;
    cin >> r >> k >> n;
    int m=n;
    int matrice[n+2][m+2];

    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            matrice[i][j] = r;
            r+=k;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}