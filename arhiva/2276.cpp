#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> a;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        a.push_back(nr);
    }
    sort(a.begin(),a.end());
    for (int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;

        auto left = lower_bound(a.begin(), a.end(), x);
        auto right = upper_bound(a.begin(), a.end(), y);
        cout << right - left << endl;
    }
    return 0;
}