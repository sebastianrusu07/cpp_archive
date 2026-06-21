#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        long long sum=0;
        for(long long j=0;j<n;j++)
        {
            long long candies;
            cin>>candies;

            sum+=candies%n;
        }
        cout << (sum%n==0?"YES\n":"NO\n");
    }
    return 0;
}