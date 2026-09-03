#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <iostream>
using namespace std;

int pow2(int n)
{
    if(n==0)
    {
        return 1;
    }

    int p;
    if (n%2==0)
    {
        p=pow2(n/2);
        p*=p;
    }else
    {
        p = 2 * pow2(n-1);
    }

    return p%9001;
}

int main()
{
    int n;
    cin>>n;
    cout<<pow2(n-1);
    return 0;
}