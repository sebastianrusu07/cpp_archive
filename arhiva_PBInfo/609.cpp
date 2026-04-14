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
    for(int i=0;i<input.length();i++)
    {
        char c=input[i];
        cout<<c;
        if(isVowel(c))cout<<c;
    }
    return 0;
}
