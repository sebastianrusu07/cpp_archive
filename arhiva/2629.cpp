 #include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
#include <cctype>
using namespace std;

int main()
{
    string s;
    vector<vector<string>> v(256);
    while (cin >> s && s != "quit")
    {
        v[s.size()].push_back(s);
    }

    for (auto &i : v)
    {
        sort(i.begin(), i.end());
    }

    reverse(v.begin(), v.end());

    for (auto &i : v)
    {
        for (auto j : i)
        {
            cout << j << '\n';
        }
    }
    return 0;
}