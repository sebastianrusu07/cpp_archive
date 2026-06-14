#include <iostream>
#include <string>
#include <vector>
using namespace std;

int freq[26];

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'A']++;
    }

    bool one=false;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            one=true;
            cout << char('A'+i);
        }
    }

    if (one==false)
    {
        cout << "Alphabet Soup!";
    }
    return 0;
}