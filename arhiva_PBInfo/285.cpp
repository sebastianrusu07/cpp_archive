#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int limit=sqrt(n);
    for(int i=1;i<=limit;i++)
    {
        int iSquared = i*i;
        int pairSquared = n-iSquared;
        if(iSquared>pairSquared)
        {
            return 0;
        }
        int root=sqrt(pairSquared);
        if (root*root==pairSquared)
        {
            cout<<i<<" "<<root<<'\n';
        }
    }
    return 0;
}