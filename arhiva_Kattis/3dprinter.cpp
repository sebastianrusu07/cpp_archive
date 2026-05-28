#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int powi(int a, int b)
{
    int res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= a;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    if (n==1)
    {
        cout << 1;
        return 0;
    }
    for (int days = 1; days <= n; days++)
    {
        for (int switchDay=1; switchDay <= days; switchDay++)
        {
            int growthPhase = powi(2,switchDay);
            int rem = days - switchDay;
            if (growthPhase * rem >= n)
            {
                cout << days;
                return 0;
            }
        }
    }
    return 0;
}