#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("masini.in");
ofstream cout("masini.out");

int main()
{
    int n,t;
    cin >> n >> t;


    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    int i=0;
    for(;i<n && t-v[i]>=0;i++)
    {
        t-=v[i];
    }
    cout << i;
    return 0;
}