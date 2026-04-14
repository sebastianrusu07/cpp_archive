#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxVal = a[0];
    int maxDiff = INT_MIN;
    for (int j = 1; j < n; j++)
    {
        maxDiff = max(maxDiff, maxVal - a[j]);
        maxVal = max(maxVal, a[j]);
    }
    cout << maxDiff ;
    return 0;
}

