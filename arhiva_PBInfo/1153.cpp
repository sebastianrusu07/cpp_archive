#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,numbers[1005];

int nrDigits(int n)
{
    string s = to_string(n);
    return s.length();
}

bool evenNrDigits(int n)
{
    return nrDigits(n)%2==0;
}

bool allHaveEvenDigits(int left,int right)
{
    if (left>right)
    {
        return false;
    }
    if(left==right)
    {
        return evenNrDigits(numbers[left]);
    }
    int mid = (left+right)/2;
    return allHaveEvenDigits(left,mid) && allHaveEvenDigits(mid+1,right);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    cout << (allHaveEvenDigits(0,n-1)?"DA":"NU");
    return 0;
}