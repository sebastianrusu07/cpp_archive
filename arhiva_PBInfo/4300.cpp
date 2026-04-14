#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("secv_fb.in");
ofstream cout("secv_fb.out");

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    unordered_map<int,int> window;
    for(int i=0;i<k;i++)
    {
        window[arr[i]]++;
    }

    int sum=0;
    for (int i = k; i < n; i++)
    {
        bool ok = true;;
        if (window.size()!=k)ok=false;
        if(ok)
        {
            sum++;
        }
        window[arr[i-k]]--;
        window[arr[i]]++;
        if (window[arr[i-k]]==0)window.erase(arr[i-k]);
    }
    if (window.size()==k)sum++;
    cout << sum;
    return 0;
}