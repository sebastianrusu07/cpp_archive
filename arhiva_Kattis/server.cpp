#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;

    int arr[51];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int sum=0,cnt=0;
    while (cnt<n && sum+arr[cnt]<=t)
    {
        sum+=arr[cnt];
        cnt++;
    }
    cout << cnt;
    return 0;
}