#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m,numbers[10005];

int onePrime(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return numbers[left] * (numbers[left]%2==0);
    }
    int mid = (left+right)/2;
    return onePrime(left,mid) + onePrime(mid+1,right);
}

int main()
{
    cin>>n>>m;
    n*=m; //a matrix is a cooler looking vector
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    cout << (onePrime(0,n-1));
    return 0;
}