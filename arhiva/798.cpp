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

long long fac(int n)
{
    long long p=1;
    for(int i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}

void interval(int n,int &a,int &b)
{
    a=fac(n-1)+1;
    b=fac(n+1)-1;
}
