#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    double b,h;
    cin >> b >> h;
    cout << fixed << setprecision(7) << b*h/2;
    return 0;
}

