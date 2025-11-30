#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isPerfect(long long nr)
{
    long long base = sqrt(nr);
    return base*base == nr;
}


int main()
{
    long long n;
    cin >> n;

    for (long long i=1;i*i<n;i++)
    {
        long long duo = n-i*i;
        if (isPerfect(duo))
        {
            cout << min(duo,i*i) << ' ' << max(duo,i*i);
            return 0;
        }
    }
    cout << "NU";
    return 0;
}