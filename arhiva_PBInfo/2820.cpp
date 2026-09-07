#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
using namespace std;

ifstream cin("sir11.in");
ofstream cout("sir11.out");

int main()
{
    int n;
    cin>>n;

    if (n%2!=0)
    {
        cout << n/2+1 << ' ';
        n--;
    }
    n/=2;
    for (int i=n; i>=1; i--)
    {
        cout << -i << ' ' << i << ' ';
    }
    return 0;
}