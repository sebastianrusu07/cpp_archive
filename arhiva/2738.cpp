#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool onlyDistinct(string word)
{
    unordered_map<char, int> chars;
    for (int i = 0; i < word.length(); i++)
    {
        chars[word[i]]++;
        if (chars[word[i]] >=2)return false;
    }
    return true;
}

int main()
{
    string inputWord;
    vector<string> words;
    while (cin >> inputWord && inputWord!="burrito")words.push_back(inputWord);

    string culprit="";
    for (int i = 0; i < words.size(); i++)
    {
        if (onlyDistinct(words[i]) && culprit.length()<words[i].length())culprit = words[i];
    }
    if (culprit.empty())cout << "-1";
    else cout << culprit;
    return 0;
}