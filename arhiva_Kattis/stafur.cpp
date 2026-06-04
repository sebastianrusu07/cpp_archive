#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
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
    char c;
    cin >> c;

    if (tolower(c)=='y')
    {
        cout << "Kannski";
        return 0;
    }
    if (isalpha(c))
    {
        if (isVowel(c))
        {
            cout << "Jebb";
        }else
        {
            cout << "Neibb";
        }
    }else
    {
        cout << "Kannski";
    }
    return 0;
}