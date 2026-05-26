#include <iostream>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    return false;
}

int main(){
    string s;
    while(cin >> s)
    {
        string res;
        for(int i = 0; i < s.length(); i++)
        {
            res += s[i];
            if (isVowel(s[i]) && s[i+1]=='p' && s[i+2]==s[i])
            {
                i+=2;
            }
        }
        cout << res << ' ';
    }
}