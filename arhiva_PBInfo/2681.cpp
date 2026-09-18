#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <set>
using namespace std;

bool hasLetter(string s)
{
    for (char c : s)
    {
        if (isalpha(c))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string line;
    getline(cin, line);
    line+=' ';
    int maxLen=0,len=0;
    bool started=false,valid=false;
    for (int i = 0; i < line.size(); i++)
    {
        char c = line[i];
        if (c!=' ')
        {
            len++;

            if (isalpha(c))
                valid=true;

            started=true;
        }
        else
        {
            if (started)
            {
                if (valid)
                {
                    maxLen = max(maxLen,len);
                }
                len=0;
                valid=false;
                started=false;
            }
        }
    }

    int startPos=-1;
    started=false;
    for (int pos=0; pos<line.length(); pos++)
    {
        char c = line[pos];
        if (c!=' ' && started==false)
        {
            startPos = pos;
            started = true;
        }else
        {
            if (c==' ' && started)
            {
                string reversed = line.substr(startPos, pos-startPos);
                if (hasLetter(reversed) && reversed.length() == maxLen)
                {
                    reverse(reversed.begin(), reversed.end());
                    for (int i=startPos;i<pos;i++)
                    {
                        line[i] = reversed[i-startPos];
                    }
                }
                started = false;
            }
        }
    }
    line.pop_back();
    cout << line;
    return 0;
}