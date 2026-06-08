#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    cout << min(abs(a-b), 360 - abs(a-b));
    return 0;
}