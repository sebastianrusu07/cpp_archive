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

void inloc(int num,int pos,int arr[])
{
    arr[pos] = num;
}

int sumcif(int num)
{
    if (num<10)
    {
        return num;
    }
    return num%10 + sumcif(num/10);
}

int cifmax(int num)
{
    if (num<10)
    {
        return num;
    }
    return max(num%10,cifmax(num/10));
}

int main()
{
    int n=-1,arr[1001];
    citire(n,arr);

    for (int i=0;i<n;i++)
    {
        arr[i] = sumcif(arr[i]) * cifmax(arr[i]);
    }

    afisare(n,arr);
    return 0;
}