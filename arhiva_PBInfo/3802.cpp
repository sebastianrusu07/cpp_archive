#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

string MinLexSwap(string s)
{
    int posS=-1,posB=-1;
    char smallest='z',maximum='a';
    int lastPos[26]={0};
    for (int i=0; i < s.length(); i++)
    {
        lastPos[s[i]-'a']=i;
    }

    for (int i=0;i<26;i++)
    {
        char c=char(i+'a');
        for (int j=0;j<lastPos[i];j++)
        {
            if (s[j]>c)
            {
                swap(s[lastPos[i]],s[j]);
                return s;
            }
        }
    }

    for (int i=s.size()-1;i>=0;i--)
    {
        if (s[i]!=s[i-1])
        {
            swap(s[i],s[i-1]);
            return s;
        }
    }
}