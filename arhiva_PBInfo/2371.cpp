#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

#define ll long long

ll cmmdc(ll a,ll b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

ll cmmmc(ll a,ll b)
{
    return (a*b)/cmmdc(a,b);
}

int main() {

    ll l,a,b;
    cin >> a >> b;
    l = cmmmc(a, b);
    cout << l/a + l/b - 2;
    return 0;
}