#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

void eraseAllInstancesOfC(string &s,char c)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==c)
        {
            s.erase(i,1);
            i--;
        }
    }
}

int main()
{
    string word,input;
    cin >> word >> input;

    int lives=10;
    for (int i=0;i<input.length() && !word.empty() && lives>0;i++)
    {
        if (word.find(input[i])==string::npos)
        {
            lives--;
        }else
        {
            eraseAllInstancesOfC(word,input[i]);
        }
    }
    if (lives==0)
    {
        cout << "LOSE";
    }else
    {
        cout << "WIN";
    }
    return 0;
}