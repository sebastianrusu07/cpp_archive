#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    if (n==k)
    {
        cout << "impossible";
        return 0;
    }

    for (int i=1; i<=k; i++)
    {
        cout << "open " << i << " using " << i+1 << '\n';
    }
    return 0;
}