#include <iostream>
#include <unordered_set>
using namespace std;

bool hasLetter(string s)
{
    for (auto c : s)
    {
        if ( (c>='a' && c<='z') || (c>='A' && c<='Z') )
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s,code;
    cin >> s >> code;

    if (s.length() != code.length())
    {
        cout << "cod incorect";
        return 0;
    }

    string newS;
    newS+=s[0];
    for (int i=1;i<s.length();i++)
    {
        if ( (code[i]-'0')%2==0 )
        {
            newS = s[i] + newS;
        }else
        {
            newS = newS + s[i];
        }
    }
    cout << newS;
    return 0;
}