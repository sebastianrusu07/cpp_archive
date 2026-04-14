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
#include <cctype>
using namespace std;

int apcar(char c, string s)
{
    int cnt=0;
    for (int i=0;i<s.length();i++)
    {
        if (tolower(s[i])==c) cnt++;
    }
    return cnt;
}

int totalVowels(string s)
{
    int total=0;
    total+=apcar('a',s);
    total+=apcar('e',s);
    total+=apcar('i',s);
    total+=apcar('o',s);
    total+=apcar('u',s);
    return total;
}

int main()
{
    string text;
    getline(cin,text);
    cout << totalVowels(text);
    return 0;
}