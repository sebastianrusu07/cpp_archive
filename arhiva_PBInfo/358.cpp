#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <climits>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int maxDiff=0;
    cin >> v[0];
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        int diff = abs(v[i] - v[i-1]);
        maxDiff = max(maxDiff, diff);
    }
    int counter=0;
    for (int i = 0; i < n-1; i++)
    {
        int diff = abs(v[i] - v[i+1]);
        if (diff == maxDiff)
        {
            counter++;
        }
    }
    cout << maxDiff <<  " " << counter;
    return 0;
}