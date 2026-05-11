#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    s='-'+s;
    string abbr;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            abbr+=s[i+1];
        }
    }
    cout << abbr;
    return 0;
}

