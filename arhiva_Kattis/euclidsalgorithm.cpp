#include <iostream>
#include <string>
#include <vector>
using namespace std;

unsigned long long cmmdc(unsigned long long a,unsigned long long b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

int main()
{
    unsigned long long a,b;
    cin>>a>>b;
    cout<<cmmdc(max(a,b),min(a,b));
    return 0;
}