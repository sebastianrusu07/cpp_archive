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

long long powll(long long a,long long b)
{
    long long p=1;
    for (long long i=0;i<b;i++)
    {
        p*=a;
    }
    return p;
}

int main()
{
    long long n;
    cin >> n;
    for(long long i=1;i<=n;i++)
    {
        cout << powll(i,i) << ' ';
    }
    return 0;
}