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
    int center = n / 2;
    int maxVal = (n + 1) / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int dist = abs(i - center) + abs(j - center);
            int val = max(0, maxVal - dist);
            cout << val;
            if (j < n - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}