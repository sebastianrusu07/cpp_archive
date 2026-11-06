#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,numbers[1005];

int allOrdered(int left,int right)
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
    return allOrdered(left,mid) && allOrdered(mid+1,right) && numbers[mid] == numbers[mid+1];
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    cout << (allOrdered(0,n-1)?"DA":"NU");
    return 0;
}