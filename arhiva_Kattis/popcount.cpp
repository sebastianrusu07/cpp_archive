#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int spongebob=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='1')
        {
            spongebob++;
        }
    }
    cout <<spongebob;
    return 0;
}

