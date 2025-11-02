#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int i=0;
    for (i; word[i]!='a' && word[i]!='A' && word[i]!='e' && word[i]!='E' && word[i]!='i' && word[i]!='I' && word[i]!='o' && word[i]!='O' && word[i]!='u' && word[i]!='U';i++)
    {
        if (i==word.length()-1)
        {
            cout<<"IMPOSIBIL";
            return 0;
        }
    }
    int vocala=i;
    i=word.size()-1;

    for (i; word[i]=='a' || word[i]=='A' || word[i]=='e' || word[i]=='E' || word[i]=='i' || word[i]=='I' || word[i]=='o' || word[i]=='O' || word[i]=='u' || word[i]=='U';i--)
    {
        if (i==1)
        {
            cout<<"IMPOSIBIL";
            return 0;
        }
    }
    int cons = i;
    swap(word[vocala],word[cons]);
    cout<<word;
}