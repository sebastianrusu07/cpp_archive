#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool OK(int a,int b) {
    if (a % 2 != 0 && b % 2 == 0) {
        return true;
    }
    if (b % 2 != 0 && a % 2 == 0) {
        return false;
    }
    return a<b;
}

int main()
{
    int n,m;
    int matrice[51][51];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrice[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        sort(matrice[i], matrice[i] + m, OK);
        for (int j = 0; j < m; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}