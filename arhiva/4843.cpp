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

string semiPal(string word,bool &noSemiCheck)
{
    if (word.length()%2!=0)return word;

    string firstHalf = word.substr(0, word.length()/2);
    string secondHalf = word.substr(word.length()/2, word.length()-1);

    noSemiCheck = true;
    return secondHalf+firstHalf;
}

int main()
{
    string inputWord;

    vector<string> words;
    while (cin>>inputWord && inputWord!="endingWord")
    {
        words.push_back(inputWord);
    }

    vector<string> output;
    bool sayIt=false; //check if there's atleast one semi palindrome word

    for (int i=0;i<words.size();i++)
    {
        bool middlemanSayIt = false;
        string word=semiPal(words[i],middlemanSayIt);
        if (middlemanSayIt)sayIt=true;
        output.push_back(word);
    }

    if (!sayIt)
    {
        cout << "nu exista";
        return 0;
    }

    for (int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }
    return 0;
}