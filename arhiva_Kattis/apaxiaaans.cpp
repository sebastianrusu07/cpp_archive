#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string res;
    res+=s[0];
    for(int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i-1]) continue;
        res+=s[i];
    }
    cout << res;
    return 0;
}