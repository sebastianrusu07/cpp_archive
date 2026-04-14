#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;

bool identici(int a[], int b[], int length) {
    for (int i = 0; i < length; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {

    int n,m,z;
    cin >> n >> z;
    m = n;
    int matrice[n][m];
    int zone[5] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrice[i][j];
            int z1 = (i<j) && (i+j<n-1);
            int z2 = (i<j) && (i+j>n-1);
            int z3 = (i>j) && (i+j>n-1);
            int z4 = (i>j) && (i+j<n-1);
            int zona = 1*z1 + 2*z2 + 3*z3 + 4*z4;
            zone[zona]+=matrice[i][j];
        }
    }
    cout << zone[z];
    return 0;
}