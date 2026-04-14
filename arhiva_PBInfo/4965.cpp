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

#define ll long long

ifstream cin("oac.in");
ofstream cout("oac.out");

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
    ll c,k1,k2,k3,t;
    cin>>c>>k1>>k2>>k3>>t;
    if (c==1)
    {
        ll small=min(k1,min(k2,k3));
        cout << t/small;
        return 0;
    }
    if (c==2)
    {
        ll c1=cmmmc(k1,k2);
        ll c2=cmmmc(k1,k3);
        ll c3=cmmmc(k2,k3);
        cout << min(c1,min(c2,c3));
    }
    if (c==3)
    {
        ll c1=cmmmc(k1,k2);
        ll c2=cmmmc(k1,k3);
        ll c3=cmmmc(k2,k3);
        ll trip=cmmmc(k1,cmmmc(k2,k3));

        cout<<t/c1 + t/c2 + t/c3 - 3*(t/trip);
    }
    return 0;
}