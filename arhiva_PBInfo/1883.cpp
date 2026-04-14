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

int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<n;i++)
    {
        int nr=v[i];
        for(int j=i+1;j<=n;j++)
        {
            if (v[j]>nr)
            {
                cout<<v[j]<<" ";
                break;
            }
            if(j==n)cout<<"-1 ";
        }
    }
    return 0;
}



