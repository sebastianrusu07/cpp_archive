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

ifstream cin("placare1.in");
ofstream cout("placare1.out");

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
    cin >> l >> a >> b;

    ll h1=cmmmc(a,l)/l*b;
    ll h2=cmmmc(b,l)/l*a;

    cout << max(h1,h2);
    return 0;
}