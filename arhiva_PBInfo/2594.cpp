#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> pare;
    vector<int> impare;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (nr%2==0)pare.push_back(nr);
        else impare.push_back(nr);
    }
    sort(pare.begin(), pare.end());
    sort(impare.begin(), impare.end());
    for (int i = 0; i < pare.size(); i++)
    {
        cout << pare[i] << " ";
    }
    for (int i = 0; i < impare.size(); i++)
    {
        cout << impare[i] << " ";
    }
    return 0;
}