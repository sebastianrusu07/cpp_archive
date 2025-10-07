#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int cmmnr(int n)
{
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    sort(v.begin(), v.end());
    if (v[0] == 0)
    {
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] != 0)
            {
                swap(v[0], v[i]);
                break;
            }
        }
    }

    int numar = 0;
    for (int digit : v)
        numar = numar * 10 + digit;

    return numar;
}
