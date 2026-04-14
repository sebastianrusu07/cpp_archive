#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)return false;
    if (n==2)return true;
    if (n%2 == 0)return false;
    for (int i=3; i*i<=n; i+=2)
    {
        if (n%i == 0)return false;
    }
    return true;
}

void sum_div_prim(int a,int &b)
{
    long long suma = 0;
    for (int i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            if (isPrime(i))suma += i;
            int complement = a / i;
            if (isPrime(complement) && i*i!=a)
            {
                suma+=complement;
            }
        }

    }
    b=suma;
}
