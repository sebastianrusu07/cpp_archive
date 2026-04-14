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

bool isOk(char c)
{
    if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'o' || tolower(c) == 'u')return false;
    return true;
}

int main()
{
    string input;
    getline(cin,input);
    for(int i=0;i<input.size();i++)
    {
        if(!isOk(input[i]))
        {
            cout << "NU";
            return 0;
        }
        if (input[i]=='i' && input[i+1]=='i')
        {
            cout<<"NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}
