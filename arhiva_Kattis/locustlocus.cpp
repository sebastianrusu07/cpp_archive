#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int cmmdc(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

int cmmmc(int a,int b)
{
    return a*b/cmmdc(a,b);
}

int main()
{
    int n;
    cin >> n;

    int minim=-1;
    for (int i = 1; i <= n; i++)
    {
        int year,a,b;
        cin >> year >> a >> b;

        int ans = year + cmmmc(a,b);
        if (ans < minim || minim == -1)
        {
            minim = ans;
        }
    }
    cout << minim;
    return 0;
}