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
    cin >> s;
    for (int i=0;i<s.size();i++)
    {
        bool flag=false;
        if (s[i]=='a')
        {
            cout << 'A';
            flag=true;
        }
        if (s[i]=='e')
        {
            cout << 'E';
            flag=true;
        }
        if (s[i]=='i')
        {
            cout << 'I';
            flag=true;
        }
        if (s[i]=='o')
        {
            cout << 'O';
            flag=true;
        }
        if (s[i]=='u')
        {
            cout << 'U';
            flag=true;
        }
        if (!flag)
        {
            cout << s[i];
        }
    }
    return 0;
}