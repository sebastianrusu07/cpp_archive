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
    long long n;
    cin>>n;

    long long mini=-1;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        long long nr;
        cin>>nr;
        if (mini==-1 || nr<mini)
        {
            mini=nr;
        }
        sum+=nr;
    }
    cout << sum + (n-2)*mini;
    return 0;
}