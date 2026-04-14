#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;

int cmmdc(int a,int b) {
    while (b) {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

int main() {

    int n,m,z;
    cin >> n;
    m = n;
    int matrice[n][m];
    int zone[5] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrice[i][j];
            int z1 = (i<j);
            int z2 = (i>j);;
            int zona = 1*z1 + 2*z2;
            zone[zona]+=matrice[i][j];
        }
    }
    cout << cmmdc(zone[1],zone[2]) ;
    return 0;
}