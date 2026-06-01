#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    double input;
    cin >> input;

    cout << fixed << long(round(input * 5280.0/4854.0 * 1000));
    return 0;
}