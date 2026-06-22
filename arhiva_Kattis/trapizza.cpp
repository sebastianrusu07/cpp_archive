#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    double d;
    double l,L,h;
    cin>>d>>l>>L>>h;

    double circleArea = M_PI * d*d;
    double trapezArea = (l+L)*h*2; //modified formula to avoid division but theres pi involved anyway so this is me trying to be a smartass and failing

    if (circleArea==trapezArea)
    {
        cout << "Jafn storar!";
    }else
    {
        cout << (circleArea>trapezArea?"Mahjong!" : "Trapizza!");
    }
    return 0;
}