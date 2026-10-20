#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
#include <iostream>
using namespace std;

void citire(int &n,int arr[])
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void afisare(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void inloc(int num,int pos,int arr[])
{
    arr[pos] = num;
}

int main()
{
    int n,arr[1001];
    citire(n,arr);

    int val = arr[0];
    for(int i=0;i<n;i++)
    {
        if (arr[i]%2!=0) continue;
        int k = arr[i]-val;
        inloc(k,i,arr);
    }
    afisare(n,arr);
    return 0;
}