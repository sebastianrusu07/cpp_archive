#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    double x,y,d;
    cin >> x >> y >> d;

    double l = ceil(x/d);
    double L = ceil(y/d);

    cout << 1LL*l*L;
    return 0;
}