#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    string input;
    getline(cin,input);
    for(int i=0;i<input.length();i++)
    {
        int trueDigit=input[i]-'0';
        if(input[i]!=' ' && (trueDigit >=10 || trueDigit <0))cout<<input[i];
    }
    return 0;
}