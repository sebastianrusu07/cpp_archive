#include <iostream>
#include <string>
using namespace std;

int main() {

    int n,m;
    cin >> n;
    m = n;
    int matrice[n+1][m+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i%2 == 0) {
                matrice[i][j] = j;
            }else {
                matrice[i][j] = i;
            }
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