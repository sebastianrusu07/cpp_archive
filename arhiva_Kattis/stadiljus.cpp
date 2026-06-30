#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int n,mult,maximum;
    cin>>n>>mult>>maximum;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    long long sum=0;
    int maxSize=0;
    for(int i=0;i<n;i++)
    {
        sum+=(arr[i]*mult);
        if (sum <= maximum * (i+1))
        {
            maxSize=(i+1);
        }
    }
    cout<<maxSize;
    return 0;
}