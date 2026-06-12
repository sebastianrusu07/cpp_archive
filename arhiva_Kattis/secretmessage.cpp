#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

void addPadding(string &s)
{
    int root = sqrt(s.length());
    if (root*root == s.length()) return;
    int nextPerfect = ((int)(sqrt(s.length()))+1)*((int)(sqrt(s.length()))+1);
    while (s.length() < nextPerfect)
    {
        s+='*';
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        addPadding(s);

        int len = sqrt(s.length());
        char secret[len][len];
        for(int j=0;j<len;j++)
        {
            for(int k=0;k<len;k++)
            {
                secret[j][k] = s[k+j*len];
            }
        }

        for(int j=0;j<len;j++)
        {
            for(int k=len-1;k>=0;k--)
            {
                if (secret[j][k] == '*') continue;
                cout<<secret[k][j];
            }
        }
        cout << '\n';
    }

    return 0;
}