#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

bool isVowel(char c)
{
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')return true;
    return false;
}

int main()
{
    string a,b;
    cin >> a >> b;
    for(int i=0;i<a.length();i++)
    {
        if(isVowel(a[i]) && isVowel(b[i]))cout << "*";
        else if(!isVowel(a[i]) && !isVowel(b[i]))cout << "#";
        else cout << "?";
    }
    return 0;
}