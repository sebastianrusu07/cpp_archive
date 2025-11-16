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

bool hasSubstring(string word,string t,int index)
{
    for (int i=0;i<t.length();i++)
    {
        if (word[i+index]!=t[i])return false;
    }
    return true;
}

int main()
{
    string input;
    getline(cin,input);

    string tempWord;
    vector<string> words;
    for(int i=0;i<input.length();i++)
    {
        if (isalpha(input[i]))
        {
            tempWord+=input[i];
        }else
        {
            if (!tempWord.empty())words.push_back(tempWord);
            tempWord.clear();
        }
    }
    bool first=true;
    int firstIndex=0,lastIndex=words.size()-1;
    for (int i=0;i<words.size();i++)
    {
        if (first)
        {
            first=false;
            cout << words[firstIndex] << endl;
            firstIndex++;
        }else
        {
            first=true;
            cout << words[lastIndex] << endl;
            lastIndex--;
        }
    }
    return 0;
}