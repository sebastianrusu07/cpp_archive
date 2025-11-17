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

void prelucrateWord(string &word,bool &found)
{
    if (word.length()%2!=0 && word.length()>=3)
    {
        unsigned int len = (word.length()+1)/2;
        word.erase(len-1,1);
        found = true;
    }
}

int main()
{
    string inputWord;
    vector<string> words;
    while (cin >> inputWord && inputWord!="taco")words.push_back(inputWord);

    bool found=false;
    bool staticFound=false;
    vector<string> words2;
    for (int i = 0; i < words.size(); i++)
    {
        prelucrateWord(words[i],found);
        words2.push_back(words[i]);
        if (found)staticFound=true;
    }

    if (!staticFound)cout<<"nu exista";
    else
    {
        for (int i = 0; i < words2.size(); i++)
        {
            cout<<words2[i]<< " ";
        }
    }
    return 0;
}