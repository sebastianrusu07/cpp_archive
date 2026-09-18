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

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if (isalpha(s[i]))
        {
            if(isupper(s[i])) s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}