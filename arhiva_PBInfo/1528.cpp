#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <utility>
#include <iomanip>
using namespace std;

ifstream cin("operatiimatematice.in");
ofstream cout("operatiimatematice.out");

int modulo7(const string &num) {
    int mod = 0;
    for (char c : num) {
        mod = (mod * 10 + (c - '0')) % 7;
    }
    return mod;
}

int main() {
    int n;
    cin >> n;
    vector<int> vector(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vector[i];
    }
    int nr=vector[0];
    for (int i = 1; i < n; i++)
    {
        nr*=3;
        nr+=vector[i];
        if (i==n-1)
        {
            break;
        }
        nr=nr%7;
    }
    cout << nr << endl;

    string numar = "";
    for (int i = 0; i < n; i++)
    {
        numar += to_string(vector[i]);
    }
    cout << (modulo7(numar)==0?"DA":"NU");

    cin.close();
    cout.close();

    return 0;
}