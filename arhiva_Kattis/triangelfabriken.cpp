#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if (a>90 || b>90 || c>90)
    {
        cout << "Trubbig Triangel";
        return 0;
    }
    if (a==90 || b==90 || c==90)
    {
        cout << "Ratvinklig Triangel";
        return 0;
    }
    cout << "Spetsig Triangel";
    return 0;
}

