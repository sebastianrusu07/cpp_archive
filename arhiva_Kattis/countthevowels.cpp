#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

bool isVowel(char c)
{
    c=tolower(c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    getline(cin, s);

    int cnt=0;
    for(int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

