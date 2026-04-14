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
    int before;
    cin >> before;
    int minDiff = INT_MAX;
    int first = 0, second = 0;

    for(int i = 0; i < n - 1; i++)
    {
        int now;
        cin >> now;
        int diff = abs(before - now);

        if (diff < minDiff)
        {
            minDiff = diff;
            first = before;
            second = now;
        }
        else if (diff == minDiff)
        {
            if (before + now < first + second)
            {
                first = before;
                second = now;
            }
        }

        before = now;
    }

    cout << first << " " << second;
    return 0;
}