#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool thoseAreTheEyesOfAHappyMan(int pos,string s)
{
    if (s[pos+1]=='-')
    {
        if (s[pos+2]==')')
        {
            return true;
        }
    }else
    {
        if (s[pos+1]==')')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string input;
    getline(cin, input);
    for (int i=0;i<input.length();i++)
    {
        if (input[i]==':' || input[i]==';')
        {
            if (thoseAreTheEyesOfAHappyMan(i,input))
            {
                cout << i << '\n';
            }
        }
    }
    return 0;
}