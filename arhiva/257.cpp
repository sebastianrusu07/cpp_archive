#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

vector<long long> fibo;

int indexOfFirstSmallerFiboNumber(int n)
{
    int checkIndex = 1;
    while (n>=fibo[checkIndex])
    {
        checkIndex++;
    }
    return checkIndex;
}

int main()
{
    for (int i=1,prev=0,t;i<=1000000000;t=i,i+=prev,prev=t)fibo.push_back(i);

    int n;
    cin>>n;

    int i=indexOfFirstSmallerFiboNumber(n);
    while (n)
    {
        if (n-fibo[i]>=0)
        {
            cout<<fibo[i]<<" ";
            while (n-fibo[i]>=0)
            {
                n-=fibo[i];
            }
        }
        i--;
    }
    return 0;
}