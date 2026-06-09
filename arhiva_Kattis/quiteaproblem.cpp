#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void allToLower(string &s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
}

int main()
{
    string input;
    while(getline(cin,input))
    {
        allToLower(input);
        if (input.find("problem")!=string::npos)
        {
            cout << "yes\n";
        }else
        {
            cout << "no\n";
        }
    }
    return 0;
}