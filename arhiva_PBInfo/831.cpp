#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
using namespace std;

string next(string s)
{
    int idx = s.length() - 1;
    while (idx >= 0 && s[idx] == '1')
    {
        s[idx] = '0';
        idx -= 1;
    }
    if (idx >= 0)
    {
        s[idx] = '1';
    }
    return s;
}

int main()
{
    int n;
    cin >> n;

    string s = string(n,'0');
    int steps = (1 << n);

    for (;steps--;)
    {
        cout << s << '\n';
        s = next(s);
    }
    return 0;
}