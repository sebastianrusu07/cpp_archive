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

    int n,m;
    cin >> n;
    m = n;
    int matrice[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrice[i][j];
        }
    }

    long long s1=LLONG_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long p=1LL*matrice[i][i] * matrice[j][n-j-1];
            s1=max(p,s1);
        }
    }
    cout << s1;
    return 0;
}