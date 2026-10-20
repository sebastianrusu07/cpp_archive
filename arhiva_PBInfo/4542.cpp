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

int numar_cifre(int num)
{
    if (num<10)
    {
        return 1;
    }
    return 1 + numar_cifre(num/10);
}

int cifmax(int num)
{
    if (num<10)
    {
        return num;
    }
    return max(num%10,cifmax(num/10));
}

int elim_cifre_impare(int num)
{
    if (num < 10)
    {
        return num%2==0?num:0;
    }
    int digit = num%10;
    if (digit%2==0)
    {
        return elim_cifre_impare(num/10) * 10 + digit;
    }
    return elim_cifre_impare(num/10);
}

int main()
{
    int n=-1,arr[1001];
    citire(n,arr);

    for (int i=0;i<n;i++)
    {
        if (numar_cifre(arr[i])%2!=0)
        {
            inloc(elim_cifre_impare(arr[i]),i,arr);
        }
    }

    afisare(n,arr);
    return 0;
}