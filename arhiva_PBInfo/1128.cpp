#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    long long n,k;
    cin>>k>>n;

    long long res=1;
    for (long long i=n-k+1;i<=n;i++)
    {
        res*=i;
        res%=224737;
    }
    cout<<res;
    return 0;
}