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

bool isVowel(char c)
{
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
    return false;
}

int main()
{
    string input;
    getline(cin,input);
    for(int i=0;i<input.length()-2;i++)
    {
        if (isVowel(input[i]) && input[i+1]=='p' && input[i+2]==input[i])
        {
            input.erase(input.begin()+i,input.begin()+i+2);
        }
    }
    cout<<input;
    return 0;
}