#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> pos;
    vector<int> neg;
    int nrZero = 0;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (nr == 0)nrZero++;
        else if (nr > 0)pos.push_back(nr);
        else neg.push_back(nr);
    }
    sort(pos.begin(), pos.end(), greater<int>());
    sort(neg.begin(), neg.end(), greater<int>());
    for (int i = 0; i < neg.size(); i++)cout << neg[i] << " ";
    for (int i = 0; i < nrZero; i++)cout << "0 ";
    for (int i = 0; i < pos.size(); i++)cout << pos[i] << " ";
    return 0;
}