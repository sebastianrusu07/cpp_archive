#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("tort.in");
ofstream cout("tort.out");

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

    ll a,b;
    cin >> a >> b;
    ll l = cmmdc(a,b);
    ll total = a/l * b/l;
    cout << total << " " << l;
    return 0;
}