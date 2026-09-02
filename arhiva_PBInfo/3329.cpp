#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <iostream>
using namespace std;

char appearances[26];

long long factorial(long long n)
{
    long long res = 1;
    for (long long i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    string seq;
    cin>>seq;

    for (char c : seq)
    {
        appearances[c-'a']++;
    }
    long long totalChars=seq.length();
    long long totalAnagrams = factorial(totalChars);
    for (char apps : appearances)
    {
        if (apps > 0)
        {
            totalAnagrams /= factorial(apps);
        }
    }

    cout<<totalAnagrams;
    return 0;
}