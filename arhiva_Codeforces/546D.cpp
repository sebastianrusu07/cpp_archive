#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

#define limit 5000001
long long totalLowerThan[limit];
long long factors[limit];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (long long i=2;i<limit;i++)
    {
        if (factors[i]==0)
        {
            for (long long j=i;j<limit;j*=i)
            {
                for (long long y = j; y < limit; y += j){
                    factors[y]++;
                }
            }
        }
    }

    totalLowerThan[0]=0;
    for (long long i=1;i<limit;i++)
    {
        totalLowerThan[i] = totalLowerThan[i-1]+factors[i];
    }

    long long t;
    cin >> t;
    for (long long i=1;i<=t;i++)
    {
        long long a,b;
        cin >> a >> b;
        cout << totalLowerThan[a] - totalLowerThan[b] << '\n';
    }
    return 0;
}