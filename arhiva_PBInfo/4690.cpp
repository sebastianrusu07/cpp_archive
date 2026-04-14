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
            int suma=0;
            if (sus == true) {
                suma+=matrice[i-1][j];
            }
            if (jos == true) {
                suma+=matrice[i+1][j];
            }
            if (stanga == true) {
                suma+=matrice[i][j-1];
            }
            if (dreapta == true) {
                suma+=matrice[i][j+1];
            }
            if (nr>suma) {
                counter++;
            }
        }
    }
    cout << counter;
    return 0;
}