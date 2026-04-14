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
#include <fstream>
#include <thread>
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    string s;
    unordered_set<string> set;
    vector<string> v;
    while (cin >> s)
    {
        if (set.find(s) == set.end())
        {
            set.insert(s);
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
    return 0;
}