#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    if (n < m)
    {
        swap(n, m);
    }
    cout << m;
    int cnt = 0;
    do
    {
        int r = n % m;
        cnt += n / m;
        n = m;
        m = r;
    }while (m);
    cout << ' ' << cnt;
    return 0;
}