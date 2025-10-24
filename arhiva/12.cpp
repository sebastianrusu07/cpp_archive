#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <list>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s.insert(s.begin(), ' ');
    s.push_back(' ');
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i]==' ')cout << ' ';
        else if (s[i-1]==' ' || s[i+1]==' ')cout << char(int(s[i])-32);
        else cout << s[i];
    }
    return 0;
}