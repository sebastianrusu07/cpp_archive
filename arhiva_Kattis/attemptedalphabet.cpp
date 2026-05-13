#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int alphabet[26];

int main()
{
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        alphabet[input[i]-'a'] = 1;
    }

    bool error=false;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            cout << char('a'+i);
            error = true;
        }
    }

    if (!error)
    {
        cout << "Good job!";
    }
    return 0;
}