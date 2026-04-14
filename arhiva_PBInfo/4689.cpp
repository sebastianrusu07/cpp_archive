#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    m=n;
    int matrice[n+2][m+2];
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            matrice[i][j]=max(i,j);
        }
    }

    for (int i=2;i<=n;i++) {
        for (int j=2;j<=m;j++) {
            matrice[i][j]=matrice[i][j-1]+matrice[i-1][j];
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