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
    int minDiff = INT_MAX,index=0;
    for (int i = 1; i<=n; i++)
    {
        int f,b;
        cin >> f >> b;
        int diff = abs(f - b);
        if (diff <= minDiff)
        {
            minDiff = diff;
            index=i;
        }
    }
    cout << index;
    return 0;
}