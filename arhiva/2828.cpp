#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

bool isUppercase(char c)
{
    if (toupper(c) == c)return true;
    return false;
}

int main()
{
    string input,result="";
    getline(cin,input);
    for(int i=0;i<input.length();i++)
    {
        if(isUppercase(input[i])&&(i==0 || input[i-1]==' '))
        {
            result += input[i];
        }
    }
    cout<<result;
    return 0;
}