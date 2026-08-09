#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nr;
    cin >> nr;

    int all = digitSum(nr);
    while (nr)
    {
        int digit = nr%10;
        if (all-digit==digit)
        {
            cout << "DA " << digit;
            return 0;
        }
        nr /= 10;
    }
    cout << "NU";
    return 0;
}