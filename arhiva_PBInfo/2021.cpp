#include <algorithm>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;

ifstream cin("sumagauss2.in");
ofstream cout("sumagauss2.out");

int main()
{
    long long n;
    cin >> n;

    long long l = 0;
    while ((l+1)*(l+2)/2 <= n)
    {
        if (2 * n % (l+1) == 0 && (2*n/(l+1) - l)%2 == 0)
        {
            long long k = (2*n/(l+1) - l)/2;
            cout << k+l << ' ' << k-1 << '\n';
        }
        l++;
    }
    return 0;
}