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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrice[i][j];
        }
    }
    bool AcestBoolValoreaza20DePuncte = false;
    for (int i = 0; i < m; i++) {
        int target = matrice[0][i];
        for (int j = 0; j < n; j++) {
            if (matrice[j][i] != target) {
                break;
            }else {
                if (j==n-1) {
                    cout << target << " ";
                    AcestBoolValoreaza20DePuncte = true;
                }
            }
        }
    }
    if (!AcestBoolValoreaza20DePuncte) {
        cout << "nu exista";
    }
    return 0;
}