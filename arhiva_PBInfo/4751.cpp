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

int nr_ap(int num,int k)
{
    if (num<10)
    {
        return num==k;
    }
    return (num%10==k) + nr_ap(num/10,k);
}

int prima_cifra(int num)
{
    if (num<10)
    {
        return num;
    }
    return prima_cifra(num/10);
}

void inloc(int num,int pos,int arr[])
{
    arr[pos] = num;
}

int main()
{
    int n,arr[1001];
    citire(n,arr);
    for(int i=0;i<n;i++)
    {
        int k = prima_cifra(arr[i]);
        inloc(nr_ap(arr[i],k),i,arr);
    }
    afisare(n,arr);
    return 0;
}