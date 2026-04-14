#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

bool isVowel(char c)
{
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
    return false;
}

bool goodWord(string word)
{
    for(int i=0;i<word.length();i++)
    {
        if(!isVowel(word[i]))return false;
    }
    return true;
}

int main()
{
    string input;
    while (cin >> input)
    {
        if (goodWord(input))cout << input << endl;
    }
    return 0;

}