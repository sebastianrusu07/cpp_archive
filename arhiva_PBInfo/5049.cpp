#include <iostream>
using namespace std;

int paranthesisCount(char c[201])
{
    int cnt=0;
    for(int i=0;c[i]!='\0';i++)
    {
        if(!isalpha(c[i]) && !isdigit(c[i]))
        {
            cnt++;
        }
    }
    return cnt;
}

int letterCount(char c[201])
{
    int cnt=0;
    for(int i=0;c[i]!='\0';i++)
    {
        if(isalpha(c[i]))
        {
            cnt++;
        }
    }
    return cnt;
}

int isOk(char c[201])
{
    int letters = letterCount(c),paranthesis = paranthesisCount(c);
    return (letterCount(c)==paranthesisCount(c) && letters>0 && paranthesis>0) ;
}

int main()
{
    char word[201];
    int goodWords = 0;
    while (cin>>word && word[0]!='.')
    {
        goodWords += isOk(word);
    }
    cout << goodWords;
    return 0;
}