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
    long long a,b;
    cin>>a>>b;

    cout << factorial(a+b)/(factorial(a) * factorial(b));
    return 0;
}