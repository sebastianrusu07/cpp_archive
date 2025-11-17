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

int main()
{
    string firstInput;
    getline(cin,firstInput);
    firstInput+=' ';
    string secondInput;
    getline(cin,secondInput);
    secondInput+=' ';

    vector<string> firstWords;
    vector<string> secondWords;
    string tempWord;
    for(int i=0;i<firstInput.length();i++)
    {
        if (firstInput[i]==' ' && !tempWord.empty())
        {
            firstWords.push_back(tempWord);
            tempWord.clear();
        }else
        {
            tempWord+=tolower(firstInput[i]);
        }
    }
    tempWord.clear();
    for(int i=0;i<secondInput.length();i++)
    {
        if (secondInput[i]==' ' && !tempWord.empty())
        {
            secondWords.push_back(tempWord);
            tempWord.clear();
        }else
        {
            tempWord+=tolower(secondInput[i]);
        }
    }
    vector<string> commonWords;
    for(int i=0;i<firstWords.size();i++)
    {
        if (find(secondWords.begin(),secondWords.end(),firstWords[i])!=secondWords.end())commonWords.push_back(firstWords[i]);
    }
    sort(commonWords.begin(),commonWords.end());
    unordered_map<string,bool> showOnce;
    for(int i=0;i<commonWords.size();i++)
    {
        showOnce[commonWords[i]]=true;
    }

    vector<string> finalWave;
    for (auto it : showOnce)finalWave.push_back(it.first);
    sort(finalWave.begin(),finalWave.end());
    for(int i=0;i<finalWave.size();i++)
    {
        cout<<finalWave[i]<<endl;
    }
    return 0;
}