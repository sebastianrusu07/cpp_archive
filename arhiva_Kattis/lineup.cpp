#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<string> v,asc,desc;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        asc.push_back(s);
        desc.push_back(s);
    }
    sort(asc.begin(),asc.end());
    sort(desc.begin(),desc.end(),greater<string>());

    for(int i=0;i<n;i++)
    {
        if (asc[i]!=v[i])
        {
            break;
        }
        if (i==n-1)
        {
            cout << "INCREASING";
            return 0;
        }
    }

    for(int i=0;i<n;i++)
    {
        if (desc[i]!=v[i])
        {
            break;
        }
        if (i==n-1)
        {
            cout << "DECREASING";
            return 0;
        }
    }
    cout << "NEITHER";
    return 0;
}