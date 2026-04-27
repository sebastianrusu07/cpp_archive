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
    int n;
    cin >> n;

    int a[25005];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[200005];
    for(int i=1;i<=m;i++)
    {
        cin >> b[i];
    }

    for(int i=1;i<=m;i++)
    {
        int st=1, dr=n;
        bool found = false;
        while(st<=dr)
        {
            int mid=(st+dr)/2;
            if (a[mid] == b[i])
            {
                cout << 1 << ' ';
                found = true;
                break;
            }
            if(a[mid]>b[i])
            {
                dr=mid-1;
            }else
            {
                st=mid+1;
            }
        }
        if(!found) cout << 0 << ' ';
    }
    return 0;
}