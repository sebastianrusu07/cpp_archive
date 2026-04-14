#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("aoc2020.in");
ofstream cout("aoc2020.out");

#define ll long long

ll cmmdc(ll a,ll b)
{
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

ll cmmmc(ll a,ll b)
{
    return (a*b)/cmmdc(a,b);
}

int main()
{
    int n;
    cin >> n;

    ll r = 1;
    for (int i = 0; i < n; i++)
    {
        ll nr;
        cin >> nr;
        r = cmmmc(r, nr);
    }
    cout << r;
    return 0;
}