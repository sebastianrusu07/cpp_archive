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

bool isPrime(int n)
{
    for (int i = 3; i*i<=n; i += 2)
    {
        if (n % i == 0)return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    cout << "2 ";

    int cnt=1;
    for (int i = 3; cnt < n; i+=2)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            cnt++;
        }
    }
    return 0;
}