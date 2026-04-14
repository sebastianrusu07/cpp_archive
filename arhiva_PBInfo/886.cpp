#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

bool isConsonant(char c)
{
    c=tolower(c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return false;
    }
    return true;
}


int main()
{
    string s;
    cin >> s;

    string longest,current;
    for(int i=0;i<s.length();i++)
    {
        if(isConsonant(s[i]))
        {
            current += s[i];
            if(current.length()>=longest.length())
            {
                longest = current;
            }
        }else
        {
            current.clear();
        }
    }
    cout << longest;
    return 0;
}
