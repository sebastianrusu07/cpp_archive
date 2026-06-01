#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    double r,square,circle;
    cout << fixed << setprecision(5);
    while (cin >> r >> square >> circle && ( r != 0 || square != 0 || circle != 0 ))
    {
        double area =  M_PI * r * r;
        double estimate = circle/square * 4 * r * r;
        cout << area << ' ' << estimate << '\n';
    }
    return 0;
}