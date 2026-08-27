#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

long long flowers,need,ftime;
long long petals[100005],lifetimes[100005];

bool canMakePerfume(long long t)
{
    long long totalPetals = 0;
    for(long long i=0;i<flowers;i++)
    {
        long long period = min(lifetimes[i],ftime);
        long long blooms = period/t;
        totalPetals += blooms*petals[i];
        if (totalPetals >= need)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    cin >> flowers >> need >> ftime ;
    for(long long i=0;i<flowers;i++)
    {
        cin >> petals[i] >> lifetimes[i];
    }

    long long left=1,right=ftime,ans=0;
    while(left<=right)
    {
        long long mid = (left+right)/2;
        if(canMakePerfume(mid))
        {
            left = mid+1;
            ans = mid;
        }else
        {
            right = mid-1;
        }
    }
    cout << ans;
    return 0;
}

