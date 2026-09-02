#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <iostream>
using namespace std;

long long factorial(long long n)
{
    long long res = 1;
    for (long long i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    long long n,k;
    cin>>n>>k;

    long long ans = factorial(n)/(factorial(n-k) * factorial(k));
    cout<<ans;
    return 0;
}