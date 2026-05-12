#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

long long powll(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        res*=a;
        b--;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    long long sum=0;
    for (int i = 1; i <= n; i++)
    {
        long long nr;
        cin >> nr;

        int exp=nr%10;
        sum+=powll(nr/10,exp);
    }
    cout << sum;
    return 0;
}