#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int uniquePrimeFactors(long long a,long long b)
{
    long long d = 2;
    vector<int> aFactors;
    while (a>1)
    {
        while (a % d != 0 && d*d<=a)
        {
            d++;
        }
        if (d*d>a)
        {
            d = a;
        }
        aFactors.push_back(d);
        while (a % d == 0)
        {
            a /= d;
        }
    }

    d = 2;
    vector<int> bFactors;
    while (b>1)
    {
        while (b % d != 0 && d*d<=b)
        {
            d++;
        }
        if (d*d>b)
        {
            d = b;
        }
        bFactors.push_back(d);
        while (b % d == 0)
        {
            b /= d;
        }
    }
    return aFactors == bFactors;
}

int main()
{
    int n;
    cin>>n;

    int ans=0;
    for (int i=1;i<=n;i++)
    {
        long long a,b;
        cin>>a>>b;

        ans += uniquePrimeFactors(a,b);
    }
    cout<<ans;
    return 0;
}