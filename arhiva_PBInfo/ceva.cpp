#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

#define MOD 6669666
#define ull unsigned long long

ull math(ull a,ull b)
{
    a%=MOD;
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    return b%2==0?math(a*a%MOD,b/2):(math(a,b-1) * a)%MOD;
}

int main()
{
    int n;
    cin >> n;
    vector<ull> A(n);
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    bool isOk = false;
    for(int i=1;i<n-1;i++)
    {
        if((A[i]%2 == A[i-1]%2) && (A[i]%2 == A[i+1]%2))
        {
            isOk = true;
        }
    }
    if(isOk)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }
    return 0;
}