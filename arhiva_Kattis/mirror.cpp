#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;

        vector<string> v(n);
        for(int j=0;j<n;j++)
        {
            cin>>v[j];
        }

        cout << "Test " << i+1 << "\n";

        for (int j=n-1;j>=0;j--)
        {
            for(int k=m-1;k>=0;k--)
            {
                cout<<v[j][k];
            }
            cout<<"\n";
        }
    }
    return 0;
}