#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int m=n;
    int matrice[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i<k) {
                if (j<k) {
                    cout << "1 ";
                }else {
                    cout << "2 ";
                }
            }else {
                if (j<k) {
                    cout << "3 ";
                }else {
                    cout << "4 ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}