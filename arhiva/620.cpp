#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n][m];
    for (int i=0; i<n; i++) {
        for (int y=0; y<m; y++) {
            cin >> matrice[i][y];
        }
    }
    for (int col = 0; col < m; col++) {
        vector<int> temp;
        for (int row = 0; row < n; row++)
            temp.push_back(matrice[row][col]);
        sort(temp.begin(), temp.end(),greater<int>());
        for (int row = 0; row < n; row++)
            matrice[row][col] = temp[row];
    }

    for (int i=0; i<n; i++) {
        for (int y=0; y<m; y++) {
            cout << matrice[i][y] << " ";
        }
        cout << endl;
    }
    return 0;
}