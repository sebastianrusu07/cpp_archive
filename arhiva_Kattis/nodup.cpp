#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    unordered_set<string> set;
    while (cin >> s)
    {
        if (set.find(s) != set.end())
        {
            cout << "no";
            return 0;
        }else
        {
            set.insert(s);
        }
    }
    cout << "yes";
    return 0;
}