#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    char c;
    cin >> a >> c >> b;

    if (a>b)
    {
        cout << '>';
        return 0;
    }
    if (a<b)
    {
        cout << '<';
        return 0;
    }
    cout << "Goggi svangur!";
    return 0;
}

