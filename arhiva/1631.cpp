#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

bool isVowel(char c)
{
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
    string word;
    int nr3=0;
    string longest = "";
    vector<string> wordsWithVowelEnds;
    while (cin >> word)
    {
        if (word.size() == 3)
        {
            nr3++;
        }
        if (word.size()>longest.size())
        {
            longest = word;
        }
        if (isVowel(word[0]) && isVowel(word[word.size()-1]))
        {
            wordsWithVowelEnds.push_back(word);
        }
    }
    cout << nr3 << '\n';
    for (int i = 0; i < wordsWithVowelEnds.size(); i++)
    {
        cout << wordsWithVowelEnds[i] << '\n';
    }
    cout << longest.size();
    return 0;
}