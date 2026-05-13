#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int freq[90005];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        freq[nr]++;
    }

    int sum = 0;
    for (int i = 1; i <= 90000; i++)
    {
        if (freq[i] == 1 && freq[i-1]==0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}