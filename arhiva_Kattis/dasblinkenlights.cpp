#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int cmmdc(int a, int b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b, a%b);
}

int cmmmc(int a, int b)
{
    return a/cmmdc(a, b)*b;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if (a<b) swap(a,b);

    cout << (cmmmc(a,b)<=c?"yes":"no");
    return 0;
}