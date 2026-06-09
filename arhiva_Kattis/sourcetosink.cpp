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
    long long a,b,v;
    cin >> a >> b >> v;

    long long cycles = (a * b + v-1) / v * 4 - 1;
    cout << cycles;
    return 0;
}