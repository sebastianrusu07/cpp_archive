#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int n,numbers[1005],numAtIdxAppears[1005];
unordered_set<int> targetNumbers;


bool appearsInTarget(int num)
{
    return targetNumbers.find(num)!=targetNumbers.end();
}

void checkAppearances(int left,int right)
{
    if (left>right)
    {
        return;
    }
    if(left==right)
    {
        if (appearsInTarget(numbers[left]))
        {
            numAtIdxAppears[left]=1;
        }
        return;
    }
    int mid = (left+right)/2;
    checkAppearances(left,mid);
    checkAppearances(mid+1,right);
}

int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int num;
        cin>>num;
        targetNumbers.insert(num);
    }

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    checkAppearances(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<numAtIdxAppears[i]<<" ";
    }
    return 0;
}