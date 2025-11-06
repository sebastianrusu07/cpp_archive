#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("interval1.in");
ofstream cout("interval1.out");

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        v.push_back(nr);
    }
    sort(v.begin(), v.end());

    int st=0,dr=k-1;
    for (int i=1;i<=n-k;i++)
    {
        if (v[i+k-1]-v[i]<v[dr]-v[st])
        {
            st=i;
            dr=st+k-1;
        }
    }
    cout << v[st] << " " << v[dr];
    return 0;
}
