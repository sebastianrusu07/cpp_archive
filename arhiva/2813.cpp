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

bool isMusical(string word)
{
    word+=' '; // extra padding for SOL, which is a letter extra than the rest
    for (int i = 0; i < word.length()-2; i++) // -2 bc of the space we added , although im not sure if this matters?
    {
        if (word[i]=='D' && word[i+1]=='O')return true;
        if (word[i]=='R' && word[i+1]=='E')return true;
        if (word[i]=='M' && word[i+1]=='I')return true;
        if (word[i]=='F' && word[i+1]=='A')return true;
        if (word[i]=='S' && word[i+1]=='O' && word[i+2]=='L')return true;
        if (word[i]=='L' && word[i+1]=='A')return true;
        if (word[i]=='S' && word[i+1]=='I')return true;
    }
    return false;  //this could be written in less lines but i think its actually more readable this way
}

int main()
{
    string word;
    vector<string> words;
    while (cin >> word && word!="bolognese")words.push_back(word);

    bool found=false;
    for (int i = 0; i < words.size(); i++)
    {
        if (isMusical(words[i]))
        {
            cout<<words[i]<<endl;
            found=true;
        }
    }

    if (!found)cout << "nu exista";
    return 0;
}