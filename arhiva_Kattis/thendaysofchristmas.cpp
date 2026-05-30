#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << n*(n+1)/2 << '\n' << n*(n+1)*(n+2)/6;
    return 0;
}