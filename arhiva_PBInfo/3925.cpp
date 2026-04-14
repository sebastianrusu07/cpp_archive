#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;


int main()
{
    long long n, c, r;
    cin >> n >> c >> r;

    long long m = n + (c - n%c + r) % c;
    if (m == n) m += c;

    cout << m;
    return 0;
}
