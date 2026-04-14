#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;
    unsigned long long perioada = 24;
    unsigned long long pos = n % perioada;
    if (pos == 0) pos = perioada;

    int mod = 9;
    int f1 = 1, f2 = 1, fn = 1;

    if (pos == 1 || pos == 2)
    {
        fn = 1;
    }
    else
    {
        for (unsigned long long i = 3; i <= pos; i++)
        {
            int t = (f1 + f2) % mod;
            f1 = f2;
            f2 = t;
            fn = t;
        }
    }

    int rezultat = fn % 9;
    if (rezultat == 0) rezultat = 9;

    cout << rezultat;
    return 0;
}
