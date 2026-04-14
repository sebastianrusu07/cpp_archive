#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("doarvocale.in");
ofstream cout("doarvocale.out");

bool isVowel(char c)
{
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')return true;
    return false;
}

bool onlyVowels(string s)
{
    for (int i=0;i<s.length();i++)
    {
        if (!isVowel(s[i]))return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    int count=0;
    for (int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if (onlyVowels(s))count++;
    }

    cout<<count;
    return 0;
}