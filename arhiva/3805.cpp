#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    if (a+b<=c || a+c<=b || b+c<=a)
    {
        cout << "Imposibil";
        return 0;
    }

    float s = (a+b+c)/2.0;
    float r = (a * b * c) / (4 * sqrt((s*(s-a)*(s-b)*(s-c))));
    r=double((int)(r*100)/100.0);
    cout << fixed << setprecision(2);
    cout << r;
    return 0;
}