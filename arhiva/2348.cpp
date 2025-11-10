#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

bool isOk(char c)
{
    if (c == ' ') return false;
    if (isupper(c)) return false;
    char lc = tolower(c);
    if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') return false;
    return true;
}

int main()
{
    string input;
    getline(cin, input);
    int suma = 0, count = 0;

    for (char c : input)
    {
        if (isOk(c))
        {
            suma += int(c);
            count++;
        }
    }

    cout << char(suma / count);
    return 0;
}