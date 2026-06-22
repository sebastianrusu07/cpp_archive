#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    vector<long long> costs;
    for(long long i=1;i<=n;i++)
    {
        long long price;
        cin>>price;
        costs.push_back(price);
    }

    sort(costs.begin(),costs.end(),greater<long long>());

    long long sum=0;
    for (long long i=2;i<costs.size();i+=3)
    {
        sum+=costs[i];
    }
    cout<<sum;
    return 0;
}