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
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        vec.emplace_back(nr, i);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        cout << vec[i].first << " " << vec[i].second+1 << " ";
    }
    return 0;
}