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

    int s1=INT_MIN, s2=INT_MIN;
    for (int i = 0; i < n; i++) {
        s1=max(matrice[i][i],matrice[i][n-i-1]);
        cout<<s1<<endl;
    }
    return 0;
}