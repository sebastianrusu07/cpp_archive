#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int exponentSum(int nr)
{
    long long produs = 1,d = 2;
    while (nr>1)
    {
        while (nr%d!=0 && d*d<=nr)
        {
            d++;
        }
        if (d*d>nr)
        {
            d=nr;
        }
        if (nr%d==0)
        {
            produs=produs*d;
            while (nr%d==0)
            {
                nr=nr/d;
            }
        }
    }
    return produs;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int es[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        es[i]=exponentSum(arr[i]);
    }

    int ix=-1;
    for(int i=1;i<n;i++)
    {
        if (es[i-1]==es[i])
        {
            if (ix==-1)
            {
                ix=i;
            }else
            {
                if (arr[i-1]+arr[i] > arr[ix-1]+arr[ix])
                {
                    ix=i;
                }
            }
        }
    }
    if (ix==-1)
    {
        cout << "NU EXISTA";
        return 0;
    }
    cout << arr[ix-1] << ' ' << arr[ix];
    return 0;
}