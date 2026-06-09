#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<string> set;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (!set.count(s))
        {
            cout << s << '\n';
            set.insert(s);
        }
    }
    return 0;
}