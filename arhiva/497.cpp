#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> map;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }

    for (auto it : map)
    {
        if (it.second > n/2)
        {
            cout << "DA " << it.first;
            return 0;
        }
    }
    cout << "NU";
    return 0;
}