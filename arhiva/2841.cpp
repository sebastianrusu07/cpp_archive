#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int next(int nr) {
    nr++;
    while (nr%2!=0 || nr%5==0) {
        nr++;
    }
    return nr;
}


int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n][m];
    int nr=2;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            matrice[i][j]=nr;
            nr=next(nr);
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}