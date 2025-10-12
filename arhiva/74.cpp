#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)return false;
    if (n == 2 ) return true;
    if (n%2 == 0)return false;
    for(int i = 3; i*i <=n; i += 2)
    {
        if (n%i == 0)return false;
    }
    return true;
}

int nr_prim(int a)
{
    for (int i = 1;true;i++)
    {
        if (isPrime(a+i))return a+i;
    }
}