#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i*i<=n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

void sub(int n,int &b,int &a)
{
    a=0;
    b=0;
    for(int i=n+1;a==0;i++)
    {
        if(isPrime(i))a=i;
    }
    for(int i=n-1;b==0;i--)
    {
        if(isPrime(i))b=i;
    }
}