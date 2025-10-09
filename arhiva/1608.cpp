#include <cmath>
#include <algorithm>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("sortare_divizori.in");
ofstream cout("sortare_divizori.out");

int nrDiv(int nr)
{
    int div=2;
    int result=1;
    while(nr>1)
    {
        while(nr%div!=0 && div*div<=nr)div++;

        if (div*div>nr)break; //?

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
        int nr;
        cin>>nr;
        v[i].first=nrDiv(nr);
        v[i].second=nr;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[j].first>v[i].first || (v[j].first==v[i].first && v[j].second<v[i].second)) //verify
            {
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].second<<" ";
    }

    cin.close();
    cout.close();

    return 0;
}



