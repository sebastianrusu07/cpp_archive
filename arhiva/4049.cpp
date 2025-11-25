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

int cif(int nr)
{
    int cnt=0;
    while (nr)
    {
        cnt++;
        nr/=10;
    }
    return cnt;
}

int main()
{
    long long n;
    cin >> n;
    cout << n;
    for (long long i=cif(n);i<n;++i)cout << '0';
    return 0;
}