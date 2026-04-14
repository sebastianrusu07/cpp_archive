#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n+2][m+2];
    int nr=1;
    for (int i=1;i<=n;i++) {
        if (i%2!=0) {
            for (int j=1;j<=m;j++) {
                matrice[i][j] = nr;
                nr++;
            }
        }else {
            for (int j=m;j>=1;j--) {
                matrice[i][j] = nr;
                nr++;
            }
        }
    }

    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}