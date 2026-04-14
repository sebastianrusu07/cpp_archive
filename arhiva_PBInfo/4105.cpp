#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int nrDiv(int nr)
{
    int div=2;
    int result=1;
    while(nr>1)
    {
        while(nr%div!=0 && div*div<=nr)div++;

        if (div*div>nr)break;

        int factor=0;
        while(nr%div==0)
        {
            factor++;
            nr/=div;
        }
        result*=(factor+1);
    }
    if (nr>1)result*=2;
    return result;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i].first;
        v[i].second=nrDiv(v[i].first);
    }
    int counter = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (v[i].second==v[j].second)
            {
                counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}



