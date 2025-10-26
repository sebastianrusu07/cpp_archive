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
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (int i = 3;i*i <=n; i+=2)
    {
        if (n % i == 0)return false;
    }
    return true;
}

int i_prim(int n)
{
    int mare,mic;
    bool flag=false;
    for (int i=n;!flag;i++)
    {
        if (isPrime(i))
        {
            mare=i;
            flag=true;
        }
    }
    flag=false;
    for (int i=n;!flag;i--)
    {
        if (isPrime(i))
        {
            mic=i;
            flag=true;
        }
    }
    return mare-mic;
}