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

int smallestFactor(int n)
{
    if (n % 2 == 0) return 2;
    for (int i = 3; i*i <= n; i += 2)
    {
        if (n % i == 0) return i;
    }
    return n;
}

bool primeNumber(int n)
{
    return (isPrime(n));
}

bool squarePrime(int n)
{
    return (smallestFactor(n) * smallestFactor(n) == n);
}

bool almostPrime(int n)
{
    return (isPrime(n/smallestFactor(n)));
}



int main()
{
    int n;
    cin >> n;

    if (isPrime(n)) cout << "prim";
    else if (squarePrime(n)) cout << "patrat prim";
    else if (almostPrime(n)) cout << "aproape prim";
    else cout << "compus";
    return 0;
}