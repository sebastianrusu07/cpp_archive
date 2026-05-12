#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int sumDigits(int n)
{
    int sum=0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int a,b,k;
    cin >> a >> b >> k;

    while (sumDigits(a)!=k)
    {
        a++;
    }
    while (sumDigits(b)!=k)
    {
        b--;
    }
    cout << a << '\n' << b;
    return 0;
}