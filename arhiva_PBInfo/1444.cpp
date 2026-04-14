#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;

const string file_name("memory001");

ifstream in(file_name + ".in");
ofstream out(file_name + ".out");

#define cin in
#define cout out

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> sumCol(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            sumCol[j] += x;
        }
    }

    long long minSuma = LLONG_MAX , col = 0;
    for (int j = 0; j < m; j++) {
        if (sumCol[j] < minSuma) {
            minSuma = sumCol[j];
            col = j;
        }
    }

    cout << col + 1;
    return 0;
}
