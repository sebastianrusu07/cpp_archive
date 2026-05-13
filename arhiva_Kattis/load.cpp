#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> rep,weight;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        rep.push_back(a*b);
        weight.push_back(c);
    }
    sort(rep.begin(),rep.end());
    sort(weight.begin(),weight.end());
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=weight[i]*rep[i];
    }
    cout << sum;
    return 0;
}