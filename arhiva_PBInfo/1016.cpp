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
    long long n;
    cin>>n;
    if (n%2!=0)
    {
        cout << 0;
        return 0;
    }
    cout << factorial(n/2) * factorial((n+1)/2);
    return 0;
}