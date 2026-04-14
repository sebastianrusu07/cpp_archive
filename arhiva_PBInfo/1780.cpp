#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

long long powll(long long base,long long exp)
{
    long long result = 1;
    for (int i = 0 ; i < exp ; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    long long n,m;
    cin >> n >> m;

    long long cnt=0;
    for(int i=1;powll(m,i)<=n;i++)
    {
        cnt+=n/powll(m,i);
    }
    cout << cnt;
    return 0;
}