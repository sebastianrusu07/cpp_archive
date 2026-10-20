#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
#include <iostream>
using namespace std;

void citire(int &n,int arr[],int k=0)
{
    if (n==-1)
    {
        cin>>n;
    }
    if (k==n-1)
    {
        cin>>arr[k];
        return;
    }
    cin >> arr[k];
    citire(n,arr,k+1);
}

void afisare(int n,int arr[],int k=0)
{
    if (k==n-1)
    {
        cout << arr[k] << ' ';
        return;
    }
    cout << arr[k] << ' ';
    afisare(n,arr,k+1);
}

int cmmdc(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

int suma_sim(int n,int arr[],int k=0)
{
    if (k>=n/2)
    {
        return 0;
    }
    if (cmmdc(arr[k],arr[n-k-1])==1)
    {
        return arr[k] + arr[n-k-1] + suma_sim(n,arr,k+1);
    }
    return suma_sim(n,arr,k+1);
}

int main()
{
    int n=-1,arr[1001];
    citire(n,arr);
    cout << suma_sim(n,arr,0);
    return 0;
}