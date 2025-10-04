#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

const string file_name("sumcolmax");

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
    int maxSuma = -10000 , coloana = 0;;
    for (int y = 0; y < m; y++) {
        int suma = 0;
        for (int i = 0; i < n; i++) {
            int nr = matrice[i][y];
            suma+= nr;
        }
        if (suma > maxSuma) {
            coloana = y;
            maxSuma = suma;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << matrice[i][coloana] << " ";
    }
    return 0;
}