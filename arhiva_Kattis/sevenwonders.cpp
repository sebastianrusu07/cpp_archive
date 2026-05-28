#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int tablet=0,compass=0,gear=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='T')
        {
            tablet++;
            continue;
        }
        if (s[i]=='C')
        {
            compass++;
            continue;
        }
        gear++;
    }
    cout << pow(tablet,2) + pow(compass,2) + pow(gear,2) + min(compass,min(tablet,gear))*7;
    return 0;
}