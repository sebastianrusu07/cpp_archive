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
    cin >> s;

    string res;
    for(int i = 0; i < s.length();i++)
    {
        if (s[i]=='<')
        {
            res.erase(res.length()-1);
        }else
        {
            res+=s[i];
        }
    }
    cout << res;
    return 0;
}