#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("halfsort2.in");
ofstream cout("halfsort2.out");

int main() {
    int n;
    cin >> n;
    vector<int> all;
    vector<int> par;
    vector<int> impar;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (i % 2 == 0)impar.push_back(nr);
        else par.push_back(nr);
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end() , greater<int>());
    int parC=0, imparC=0;
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            cout << impar[imparC] << " ";
            imparC++;
        }else
        {
            cout << par[parC] << " ";
            parC++;
        }
    }

    cin.close();
    cout.close();

    return 0;
}