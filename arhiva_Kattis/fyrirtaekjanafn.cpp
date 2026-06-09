#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    getline(cin,s);

    for(int i = 0; i < s.length(); i++)
    {
        if(isVowel(s[i]) || s[i]==' ') cout << s[i];
    }
    return 0;
}