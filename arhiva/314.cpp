#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

const string file_name("colzero");

ifstream in(file_name + ".in");
ofstream out(file_name + ".out");

#define cin in
#define cout out

int main() {
    int n, m;
    cin >> n >> m;
    int matrice[n][m];

    for (int i = 0; i < n; i++) {
        for (int y = 0; y < m; y++) {
            cin >> matrice[i][y];
        }
    }

    int counter = 0;

    for (int i = 0; i < m; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (matrice[j][i] != 0) {
                break;
            }
        }
        if (j == n)
            counter++;
    }
    cout << counter;
    return 0;
}