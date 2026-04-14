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
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int m;
    cin>>m;
    int mic=INT_MIN;
    for(int i=0;i<m;i++)
    {
        int nr;
        cin>>nr;
        mic=max(nr,mic);
    }
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(v[i]>mic)
        {
            cout << v[i] << " ";
            flag=true;
        }
    }
    if (!flag) cout << "NU EXISTA";
    return 0;
}



