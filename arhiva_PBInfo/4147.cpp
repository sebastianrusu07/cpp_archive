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

ll nrCif[11];

void extract(ll n)
{
    ll sum=0;
    if (n==0)sum=1;
    while (n)
    {
        sum++;
        n/=10;
    }
    nrCif[sum]++;
}

int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll nr;
        cin >> nr;
        extract(nr);
    }

    ll sum=0;
    for (ll i = 1; i < 10; i++)
    {
        sum+=nrCif[i]*(nrCif[i]-1)/2;
    }
    cout << sum;
    return 0;
}