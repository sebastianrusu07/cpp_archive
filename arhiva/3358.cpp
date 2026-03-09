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

ifstream cin("gama.in");
ofstream cout("gama.out");

#define ll long long

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;k && i<=n;i++)
    {
        {
            int smallest=1999999999;
            for (int j=i;j<=n && j-i<=k ;j++)
            {
                if (a[j]<smallest)
                {
                    smallest = a[j];
                }
            }
            int pos = find(a.begin(),a.end(),smallest) - a.begin();
            for(int j=pos; j>i; j--)
            {
                swap(a[j],a[j-1]);
                k--;
            }
        }
    }
    for (int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}