#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long long nrDiv(unsigned long long nr)
{
    unsigned long long d=3,res=1;
    while (nr > 1)
    {
        while (nr%d!=0 && d*d<=nr)
        {
            d+=2;
        }
        if (d*d>nr)
        {
            d=nr;
        }
        int factorPower=1;
        while (nr%d==0)
        {
            factorPower++;
            nr/=d;
        }
        res*=factorPower;
    }
    return res;
}

int main()
{
    unsigned long long n;
    cin>>n;
    for(unsigned long long i=0;i<n;i++)
    {
        cout << nrDiv(i*(1ULL << i)+1) << ' ';
    }
    return 0;
}