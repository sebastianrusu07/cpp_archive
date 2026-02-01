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

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i*i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int sumCif(int nr)
{
    int sum = 0;
    while (nr > 0)
    {
        sum+=nr%10;
        nr/=10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (isPrime(nr) && isPrime(sumCif(nr)))cnt++;
    }
    cout << cnt;
    return 0;
}