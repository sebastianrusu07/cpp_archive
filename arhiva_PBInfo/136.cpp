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
    string w;
    int count = 0;
    while (cin >> w)
    {
        if (isVowel(w[0]) && isVowel(w[w.length()-1]))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}