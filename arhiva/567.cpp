#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int minDiff = INT_MAX;
    int index1 = 1, index2 = 2;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(h[i] - h[i + 1]);
        if (diff < minDiff)
        {
            minDiff = diff;
            index1 = i + 1;
            index2 = i + 2;
        }
    }

    int diff = abs(h[n - 1] - h[0]);
    if (diff < minDiff)
    {
        index1 = n;
        index2 = 1;
    }

    cout << index1 << " " << index2;
    return 0;
}
