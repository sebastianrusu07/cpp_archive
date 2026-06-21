#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int sumOfCharacters(string s)
{
    int sum=0;
    for(char c : s)
    {
        sum+=c-'A';
    }
    return sum;
}

void moveForward(string &s)
{
    int k = sumOfCharacters(s);
    k%=26;
    for(int i=0;i<s.length();i++)
    {
        s[i]=(s[i]-'A' + k)%26 + 'A';
    }
}

int main()
{
    string input;
    cin>>input;

    string firstHalf = input.substr(0, input.length()/2);
    string secondHalf = input.substr(input.length()/2);

    moveForward(firstHalf);
    moveForward(secondHalf);

    int len=firstHalf.length();
    for (int i=0;i<len;i++)
    {
        firstHalf[i]=((firstHalf[i]-'A') + (secondHalf[i]-'A'))%26 +'A';
    }
    cout<<firstHalf;
    return 0;
}