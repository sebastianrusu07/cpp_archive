#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;

    double delta = b*b - 4*a*c;
    if(delta<0)
    {
        cout << 0;
        return 0;
    }
    if(delta>0)
    {
        cout << 2;
        return 0;
    }
    cout << 1;
    return 0;
}