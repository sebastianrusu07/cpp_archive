#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int cmmdc(int a,int b)
{
    if (a>b) swap(a,b);
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

long long cmmmc(long long a,long long b)
{
    return (a / cmmdc(a,b)) * b;
}

int main() {
    int n;
    cin >> n;

    int ca=-1,cb=-1;
    for (int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        if (ca==-1)
        {
            ca = a;
            cb = b;
            continue;
        }
        if (cmmmc(a,b)<=cmmmc(ca,cb))
        {
            if (cmmmc(a,b)==cmmmc(ca,cb))
            {
                if (ca+cb>a+b)
                {
                    ca=a;
                    cb=b;
                }
            }else
            {
                ca=a;
                cb=b;
            }
        }
    }
    cout << ca << " " << cb;
    return 0;
}