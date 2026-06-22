#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
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
    cin>>n;

    int k;
    cin>>k;
    for(int i=1;i<n;i++)
    {
        int nr;
        cin>>nr;

        int gcd=cmmdc(k,nr);
        cout << k/gcd << '/' << nr/gcd << '\n';
    }
    return 0;
}