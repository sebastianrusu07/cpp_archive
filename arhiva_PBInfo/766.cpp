#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n+2][m+2];
    int maxL=0;
    for (int i = 0; i < n; i++) {
        int pare=0;
        for (int j = 0; j < m; j++) {
            int nr;
            cin >> nr;
            matrice[i][j] = nr;
            if (nr%2 == 0) {
                pare++;
            }
        }
        if (pare>maxL) {
            maxL = pare;
        }
    }
    for (int i = 0; i < n; i++) {
        int pare=0;
        for (int j = 0; j < m; j++) {
            int nr=matrice[i][j];
            if (nr%2 == 0) {
                pare++;
            }
        }
        if (pare==maxL) {
            cout << i+1 << " ";
        }
    }
    return 0;
}