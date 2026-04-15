#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sumP,sumI;
    if (n%2==0)
    {
        sumP = (2+n)*(n/2)/2;
        sumI = (1+n-1)*(n/2)/2;
    }else
    {
        sumP = (2+n-1)*(n/2)/2;
        sumI = (1+n)*(n/2+1)/2;
    }
    cout << sumP-sumI;
    return 0;
}