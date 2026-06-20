#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

string translateToBase(int number,int base)
{
    string codes="0123456789ABCDEF";
    string construct;
    while (number>0)
    {
        int rest = number%base;
        construct = codes[rest] + construct;
        number /= base;
    }
    return construct;
}

int main()
{
    int year;
    cin >> year;

    for (int i = 2; i <= 16; i++)
    {
        string translated = translateToBase(year,i);
        if (translated.size() >= 3 && translated[0]!='0' && translated.substr(translated.length()-2) == "00")
        {
            cout << i << ' ' << translated;
            return 0;
        }
    }

    cout << "impossible";
    return 0;
}