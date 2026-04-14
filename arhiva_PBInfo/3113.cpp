#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

string clean(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i]=='?' || word[i]=='!' || word[i]==',' || word[i]=='.')word.erase(i);
    }
    return word;
}

int main()
{
    string word;
    vector<pair<string,int>> words;
    unordered_map<string,int> wordCount;
    while (cin >> word)
    {
        wordCount[clean(word)]++;
    }
    for (auto it : wordCount)
    {
        words.push_back(it);
    }
    sort(words.begin(), words.end());
    for (int i=0;i<words.size();i++)
    {
        cout << words[i].first << " " << words[i].second << endl;
    }
    return 0;
}