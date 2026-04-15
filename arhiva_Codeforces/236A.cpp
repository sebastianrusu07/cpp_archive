#include <iostream>
using namespace std;

int freq[26];

int main()
{
    string name;
    cin >> name;

    for(int i=0;i<name.size();i++)
    {
        freq[name[i]-'a']=1;
    }
    int distinct=0;
    for(int i=0;i<26;i++)
    {
        distinct+=freq[i];
    }
    if (distinct%2==0)
    {
        cout<<"CHAT WITH HER!";
    }else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}