#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    unordered_map<char,int> letters;
    letters[s[0]]++;
    letters[s[3]]++;
    letters[s[6]]++;
    letters[s[9]]++;
    letters[s[12]]++;
    int maxLen=0;
    for (auto it : letters)
    {
        maxLen = max(maxLen,it.second);
    }
    cout << maxLen;
    return 0;
}