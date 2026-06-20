#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    long long n,k1,k2;
    cin >> n >> k1 >> k2;

    long long k=k1+k2;

    long long sum=0;
    vector<long long> v;
    for (long long i=0;i<n;i++)
    {
        long long nr;
        cin >> nr;
        sum+=nr;
        v.push_back(nr);
    }

    sort(v.begin(),v.end());

    long long partialSum=0;
    for (long long i=n-1;i>=0;i--)
    {
        partialSum+=v[i];
        k--;
        if (k==0)
        {
            break;
        }
    }
    cout << fixed << setprecision(8) << (double)partialSum/(double)sum * 100 << endl;
    return 0;
}