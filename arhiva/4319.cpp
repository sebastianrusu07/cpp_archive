#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

bool hasZero(int n)
{
    if (n == 0) return true;
    while (n)
    {
        int c = n % 10;
        if (c == 0)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (hasZero(nr))
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}