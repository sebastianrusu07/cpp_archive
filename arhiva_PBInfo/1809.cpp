#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

long long powll(long long base,long long exponent)
{
    long long result = 1;
    for(long long i = 1; i <= exponent; i++)result*=base;
    return result;
}

int main()
{
    long long a,b;
    cin>>a>>b;
    cout << powll(a,b);
    return 0;
}