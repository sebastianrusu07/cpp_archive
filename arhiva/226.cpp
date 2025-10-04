#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int m=n;
    int matrice[n][m];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == a || j == b) {
                cout << "0 ";
            } else if (i < a && j < b) {
                cout << "1 ";
            } else if (i < a && j > b) {
                cout << "2 ";
            } else if (i > a && j < b) {
                cout << "3 ";
            } else if (i > a && j > b) {
                cout << "4 ";
            }
        }
        cout << endl;
    }
    return 0;
}