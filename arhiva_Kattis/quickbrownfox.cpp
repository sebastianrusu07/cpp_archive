#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n >> ws;
    for(int i=1;i<=n;i++)
    {
        string s;
        getline(cin,s);

        int freq[26]={0};
        for(int j=0;j<s.length();j++)
        {
            if (isalpha(s[j]))
            {
                freq[tolower(s[j])-'a']=1;
            }
        }
        bool good=true;
        for(int j=0;j<26;j++)
        {
            if(freq[j]==0)
            {
                if (good)
                {
                    cout << "missing ";
                    good=false;
                }
                cout << char('a'+j);
            }
        }
        if (good)
        {
            cout << "pangram\n";
        }else
        {
            cout << '\n';
        }
    }
    return 0;
}