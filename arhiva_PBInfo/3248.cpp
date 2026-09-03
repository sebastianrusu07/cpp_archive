#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long ans=1;
    for(long long i=2;i<=n;i++)
    {
        ans*=2;
    }
    cout<<ans;
    return 0;
}