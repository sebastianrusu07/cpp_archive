#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n][m];
    for (int i=0; i<n; i++) {
        for (int y=0; y<m; y++) {
            cin >> matrice[i][y];
        }
    }
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int nr = matrice[i][j];
            bool sus = true,jos = true,stanga = true,dreapta = true;
            if (i == 0) {
                sus = false;
            }
            if (i == n-1) {
                jos = false;
            }
            if (j == 0) {
                stanga = false;
            }
            if (j == m-1) {
                dreapta = false;
            }
            int minim = 99999;
            int suma=0;
            if (sus == true) {
                minim = min(minim, abs(matrice[i-1][j]));
            }
            if (jos == true) {
                minim = min(minim, abs(matrice[i+1][j]));
            }
            if (stanga == true) {
                minim = min(minim, abs(matrice[i][j-1]));
            }
            if (dreapta == true) {
                minim = min(minim, abs(matrice[i][j+1]));
            }
            if (nr<minim) {
                counter+=minim-nr;
            }
        }
    }
    cout << counter;
    return 0;
}