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
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (int i = 3; i*i<=n; i+=2)
    {
        if (n % i == 0)return false;
    }
    return true;
}

void afisare(int a,int b)
{
    int t=a;
    a=min(a,b);
    b=max(b,t);
    if (a==2)cout<<a<<" ";
    if (a%2==0)a++;
    if (b%2==0)b--;
    for(int i=a;i<=b;i+=2)
    {
        if(isPrime(i))cout<<i<<" ";
    }
}
