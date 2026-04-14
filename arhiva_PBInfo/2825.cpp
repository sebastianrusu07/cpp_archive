#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int  m , n;
    cin >> m >> n;
    int A[m+1][n+1];
    for (int i=0; i<m; i++) {
        for (int y=0; y<n; y++) {
            int nr;
            cin >> nr;
            A[i][y] = nr;
        }
    }
    int target;
    cin >> target;
    for (int i=0; i<m; i++) {
        for (int y=0; y<n; y++) {
            int nr;
            nr=A[i][y];
            if (nr==target && ((i==0 || i==m-1 ) || (y==0 || y==n-1))) {
                cout << "DA";
                return 0;
            }
        }
    }
    cout << "NU";
    return 0;
}