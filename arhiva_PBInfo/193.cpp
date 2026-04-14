#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;

const string file_name("interschimbarelinii");

ifstream in(file_name + ".in");
ofstream out(file_name + ".out");

#define cin in
#define cout out

int main() {

    int n,m;
    cin >> n >> m;
    int matrices[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrices[i][j];
        }
    }

    int lMin = 0 , cMin = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrices[i][j] < matrices[lMin][cMin]) {
                lMin = i;
                cMin = j;
            }
        }
    }

    int lMax = 0 , cMax = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrices[i][j] > matrices[lMax][cMax]) {
                lMax = i;
                cMax = j;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        swap(matrices[lMin][i], matrices[lMax][i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrices[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}