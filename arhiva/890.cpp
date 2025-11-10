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
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')return true;
    return false;
}

int main()
{
    unordered_map<char,int> map;
    string input;
    getline(cin,input);
    for(int i=0;i<input.size();i++)
    {
        if (input[i]!=' ')
        {
            map[toupper(input[i])]++;
        }
    }
    int maxA=0;
    char c='\0';
    for (auto it : map)
    {
        if (it.second>=maxA)
        {
            if (it.second>maxA)
            {
                maxA=it.second;
                c=it.first;
            }else
            {
                if (it.first>c) c=it.first;
            }
        }
    }
    cout<<c;
    return 0;
}
