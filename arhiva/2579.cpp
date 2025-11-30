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

int main()
{
    long long n,a,b;
    cin >> n >> a >> b;

    long long current = 1; // 2^0?
    while (current < a)
    {
        current*=2;
    }
    for (int i = 1; i <= n && current <= b; i++)
    {
        cout << current << " ";
        current*=2;
    }
    return 0;
}