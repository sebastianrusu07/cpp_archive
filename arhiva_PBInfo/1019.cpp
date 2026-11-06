#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,numbers[1005];

int maxNumber(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return numbers[left];
    }
    int mid = (left+right)/2;
    return max(maxNumber(left,mid),maxNumber(mid+1,right));
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    cout << (maxNumber(0,n-1));
    return 0;
}