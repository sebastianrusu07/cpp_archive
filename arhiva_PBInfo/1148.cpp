#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,numbers[105];

bool oneOdd(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return numbers[left]%2!=0;
    }
    int mid = (left+right)/2;
    return oneOdd(left,mid) || oneOdd(mid+1,right);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    cout << (oneOdd(0,n-1)==true?"DA":"NU");
    return 0;
}