#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,numbers[1005];

bool allEven(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return numbers[left]%2==0;
    }
    int mid = (left+right)/2;
    return allEven(left,mid) && allEven(mid+1,right);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    cout << (allEven(0,n-1)?"DA":"NU");
    return 0;
}