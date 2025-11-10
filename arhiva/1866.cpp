#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("prosir.in");
ofstream cout("prosir.out");

bool isVowel(char c)
{
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')return true;
    return false;
}

int main()
{
    string input;
    getline(cin,input);
    for(int i=1;i<input.length();i++)
    {
        if((input[i]==' ' || input[i]=='.') && input[i-1]!=' ')input[i-1]='5';
    }
    cout<<input;
    return 0;
}