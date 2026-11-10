#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,numbers[1005];

bool allOrderedIncreasing(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return true;
    }
    int mid = (left+right)/2;
    return allOrderedIncreasing(left,mid) && allOrderedIncreasing(mid+1,right) && numbers[mid] < numbers[mid+1];
}

bool allOrderedDecreasing(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return true;
    }
    int mid = (left+right)/2;
    return allOrderedDecreasing(left,mid) && allOrderedDecreasing(mid+1,right) && numbers[mid] > numbers[mid+1];
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    if (allOrderedIncreasing(0,n-1))
    {
        cout << "strict crescator";
        return 0;
    }
    if (allOrderedDecreasing(0,n-1))
    {
        cout << "strict descrescator";
        return 0;
    }
    cout << "neordonat";
    return 0;
}