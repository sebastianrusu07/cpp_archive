#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;

const string file_name("mincols");

ifstream in(file_name + ".in");
ofstream out(file_name + ".out");

#define cin in
#define cout out

int main() {

    int n,m;
    cin >> n;
    int matrice[n][n];
    int minime[n];
    for (int i = 0; i < n; i++) {
        minime[i] = INT_MAX;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrice[i][j];
            minime[j]=min(minime[j],matrice[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << minime[i] << " ";
    }

    cin.close();
    cout.close();

    return 0;
}