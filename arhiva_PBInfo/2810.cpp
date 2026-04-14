#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double matrice[n+2][n+2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            double nr;
            cin >> nr;
            matrice[i][j] = nr;
        }
    }
    double sume[n];
    for (int i = 0; i < n; i++) {
        double suma=0;
        for (int j = 0; j < n; j++) {
            suma+=matrice[j][i];
        }
        double medie = suma/n;
        sume[i] = medie;
    }
    bool ranOnce = false;
    for (int i = 0; i < n; i++) {
        if (i!=n/2  || ranOnce) {
            for (int j = 0; j < n; j++) {
                cout << matrice[i][j] << " ";
            }
        }else {
            for (int j = 0; j < n; j++) {
                cout << sume[j] << " ";
            }
            ranOnce = true;
            i--;
        }
        cout << endl;
    }
    return 0;
}