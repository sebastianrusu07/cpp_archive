#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int firstRequirement(int nr)
{
    string s=to_string(nr);
    for (char c : s)
    {
        if (c=='0') return 0;
        if (nr%(c-'0')!=0)
        {
            return 0;
        }
    }
    return 1;
}

int secondRequirement(int nr)
{
    string s=to_string(nr);
    unordered_set<char> digits;
    for (char c : s)
    {
        if (digits.find(c)!=digits.end())
        {
            return 0;
        }
        digits.insert(c);
    }
    return 1;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        cnt+=(secondRequirement(i) && firstRequirement(i));
    }

    cout<<cnt;
    return 0;
}