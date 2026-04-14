#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("maxd.in");
ofstream cout("maxd.out");

#define ll long long

ll nrDiv(ll nr)
{
    ll d=2,cnt=1;
    while (nr>1)
    {
        while (nr%d!=0 && d*d<=nr)
        {
            d++;
        }
        if (d*d>nr)
        {
            d=nr;
        }
        ll f=1;
        while (nr%d==0)
        {
            nr/=d;
            f++;
        }
        cnt*=f;
    }
    return cnt;
}

int main() {

    ll a,b;
    cin>>a>>b;

    ll max=nrDiv(a),cntMax=1,mVal=a;
    for(ll i=a+1;i<=b;i++)
    {
        ll nr=nrDiv(i);
        if (nr>max)
        {
            max=nr;
            cntMax=1;
            mVal=i;
        }else
        {
            if (nr==max)
            {
                cntMax++;
            }
        }
    }
    cout<<mVal<<" "<<max<<" "<<cntMax;
    return 0;
}