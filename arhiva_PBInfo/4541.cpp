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

int suma_cifre(int num)
{
    if (num<10)
    {
        return num;
    }
    return num%10 + suma_cifre(num/10);
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
        if (prima_cifra(arr[i])%2==0)
        {
            inloc(suma_cifre(arr[i]),i,arr);
        }
    }
    afisare(n,arr);
    return 0;
}