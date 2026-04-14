#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int  n , m;
    cin >> n >> m;
    int A[n+2][m+2];
    int minFirst=999999,minLast=999999;
    for (int i=0; i<n; i++) {
        for (int y=0; y<m; y++) {
            int nr;
            cin >> nr;
            A[i][y] = nr;
            if (y==0) {
                minFirst = min(minFirst,nr);
            }
            if (y==m-1) {
                minLast = min(minLast,nr);
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int y=0; y<m; y++) {
            int nr=A[i][y];
            if (nr==minFirst) {
                cout << minLast << " ";
            }else if (nr==minLast) {
                cout << minFirst << " ";
            }else {
                cout << nr << " ";
            }
        }
        cout << endl;
    }
    return 0;
}