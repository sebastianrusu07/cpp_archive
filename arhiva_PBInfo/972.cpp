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
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')return true;
    return false;
}

int main()
{
    string input;
    getline(cin,input);
    int counter = 0;
    for(int i=1;i<input.length()-1;i++)
    {
        if(input[i]!=' ' && input[i-1]!=' ' && input[i+1]!=' ' && isVowel(input[i]) && !isVowel(input[i-1]) && !isVowel(input[i+1]))
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}