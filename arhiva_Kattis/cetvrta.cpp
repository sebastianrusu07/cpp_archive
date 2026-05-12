#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    cin >> a >> x >> b >> y >> c >> z;
    if (a==b)
    {
        cout << c << ' ';
    }else
    {
        if (b==c)
        {
            cout << a << ' ';
        }else
        {
            cout << b << ' ';
        }
    }

    if (x==y)
    {
        cout << z;
    }else
    {
        if (y==z)
        {
            cout << x;
        }else
        {
            cout << y;
        }
    }
    return 0;
}