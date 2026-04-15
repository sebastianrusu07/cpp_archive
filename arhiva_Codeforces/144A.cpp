#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maximum=0,minimum=9999999;
    int maxpos=1,minpos=0;

    int arr[102];
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        arr[i]=nr;
        if(nr>maximum)
        {
            maximum=nr;
            maxpos=i;
        }
        if(nr<=minimum)
        {
            minimum=nr;
            minpos=i;
        }
    }

    int cnt=0;
    if (maxpos>minpos)cnt--;

    for(int i=minpos;i<n;i++)
    {
        swap(arr[i],arr[i+1]);
        cnt++;
    }
    for(int i=maxpos;i>1;i--)
    {
        swap(arr[i],arr[i-1]);
        cnt++;
    }
    cout<<cnt;
    return 0;
}