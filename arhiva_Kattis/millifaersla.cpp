#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a<b && a<c)
    {
        cout << "Monnei";
        return 0;
    }
    if (b<c && b<a)
    {
        cout << "Fjee";
        return 0;
    }
    cout << "Dolladollabilljoll";
    return 0;
}

