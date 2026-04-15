#include <iostream>
#include <unordered_set>
using namespace std;

int freq[26];

int main()
{
    int junk;
    cin >> junk;
    string input;
    cin >> input;

    for (int i=0; i<input.length(); i++)
    {
        freq[tolower(input[i])-'a']++;
    }

    for (int i=0; i<=25; i++)
    {
        if (freq[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}