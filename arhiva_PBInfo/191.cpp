#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

const string file_name("maxmat");

ifstream in(file_name + ".in");
ofstream out(file_name + ".out");

#define cin in
#define cout out

int main() {
    int n,m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        int mare=-10000,locatieMare=0;
        for (int y=0; y<m; y++) {
            int nr;
            cin >> nr;
            if (nr>mare) {
                mare = nr;
                locatieMare = y;
            }
        }
        cout << mare << " " << locatieMare+1 << endl;
    }
    return 0;
}