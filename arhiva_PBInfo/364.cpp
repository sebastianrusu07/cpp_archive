#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int primCif(int nr)
{
    while (nr>9)
    {
        nr/=10;
    }
    return nr;
}

int main()
{
    int n;
    cin >> n;
    int maxDigit = -1,host=0;
    for (int i=1; i<=n; i++)
    {
        int nr;
        cin >> nr;
        int digit = primCif(nr);
        if (digit > maxDigit)
        {
            maxDigit = digit;
            host = nr;
        }
        if (digit == maxDigit)
        {
            host=max(host,nr);
        }
    }
    cout << host;
    return 0;
}