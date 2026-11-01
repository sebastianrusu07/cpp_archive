#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,numbers[1005];

bool isPrime(int n)
{
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2 == 0) return false;
    for (int i=3; i*i<=n; i+=2)
    {
        if (n%i == 0) return false;
    }
    return true;
}

int sumPrime(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return isPrime(numbers[left]) * numbers[left];
    }
    int mid = (left+right)/2;
    return sumPrime(left,mid) + sumPrime(mid+1,right);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    cout << (sumPrime(0,n-1));
    return 0;
}