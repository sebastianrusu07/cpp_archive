#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isSeparator(char c)
{
    if (c == ' ' || c == ',' || c == '.' || c == ':' || c == ';' || c == '!' || c == '?' || c == '\n')return true;
    return false;
}

string setLower(string word)
{
    for (int i = 0;i < word.length();i++)
    {
        word[i] = tolower(word[i]);
    }
    return word;
}

bool isPalindrome(string word)
{
    string normal = setLower(word);
    string reversed = normal;
    reverse(reversed.begin(), reversed.end());
    if (reversed == normal)return true;
    return false;
}

int main()
{
    string input;
    getline(cin,input);
    input+='.';
    vector<string> words;

    string tempWord;
    for (int i = 0;i < input.length();i++)
    {
        if (isSeparator(input[i]))
        {
            words.push_back(tempWord);
            tempWord.clear();
        }else
        {
            tempWord+=input[i];
        }
    }

    int maxLength = 0;
    string culprit;
    for (auto word : words)
    {
        if (isPalindrome(word))
        {
            if (maxLength < word.length())
            {
                culprit=word;
                maxLength=word.length();
            }
        }
    }

    cout<<culprit;
    return 0;
}