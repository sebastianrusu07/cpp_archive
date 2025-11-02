#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    int numarator=INT_MAX,numitor=INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        numarator = min(numarator,nr);
        numitor = max(numitor,nr);
    }

    int gcd = cmmdc(numarator,numitor);
    numarator/=gcd;numitor/=gcd;
    cout << numarator << "/" << numitor;
    return 0;
}