#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.find("ss") != string::npos)
    {
        cout << "hiss";
    }else
    {
        cout << "no hiss";
    }
    return 0;
}

