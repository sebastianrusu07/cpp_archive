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
    cin >> s;
    int vowels=0,y=0;
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i]=='y')
        {
            y++;
        }else
        {
            if (isVowel(s[i]))
            {
                vowels++;
            }
        }
    }
    cout << vowels << ' ' << vowels+y;
    return 0;
}

