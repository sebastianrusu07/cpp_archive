#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int x,y,r;
    cin >> x >> y >> r;

    int a=x-r,b=y-r;
    int c=x-r,d=y+r;
    int e=x+r,f=y+r;
    int g=x+r,h=y-r;

    cout << a << ' ' << b << '\n' << c << ' ' << d << '\n' << e << ' ' << f << '\n' << g << ' ' << h;
    return 0;
}