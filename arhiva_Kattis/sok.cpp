#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;

    double x,y,z;
    cin >> x >> y >> z;

    double supply = min(a/x, min(b/y,c/z));

    cout << fixed << setprecision(7) << a - (supply * x) << ' ' << b - (supply * y) << ' ' << c - (supply * z);
    return 0;
}