#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string alphabet[26]={
    "@","8","(","|)","3","#","6","[-]","|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"
};

string replace(char c)
{
    int pos=tolower(c)-'a';
    return alphabet[pos];
}

int main()
{
    string input;
    getline(cin,input);

    string res;
    for(int i=0; i<input.size(); i++)
    {
        if (isalpha(input[i]))
        {
            res+=replace(input[i]);
        }else
        {
            res+=input[i];
        }
    }
    cout<<res;
    return 0;
}