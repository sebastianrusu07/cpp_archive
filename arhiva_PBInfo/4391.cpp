#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    int lastNr=0;
    int numbers[n];
    for (int i=0;i<n;i++)
    {
        int optimal;
        if (lastNr>max(a[i],b[i]))
        {
            cout << -1;
            return 0;
        }
        else if (lastNr<min(a[i],b[i]))
        {
            optimal=min(a[i],b[i]);
        }else
        {
            optimal=lastNr;
        }
        numbers[i]=optimal;
        lastNr=optimal;
    }
    for(int i=0;i<n;i++)
    {
        cout<<numbers[i]<<" ";
    }
    return 0;
}