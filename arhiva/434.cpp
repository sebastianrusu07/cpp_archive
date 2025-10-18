#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if ( n % i == 0) return false;
    }
    return true;
}

int main()
{
    int l;
    cin >> l;

    int counter = 0,nr=3;
    while (true)
    {
        if (isPrime(nr))  // nu verifica daca urmatorul e prim decat daca si primul e?
        {
            if (isPrime(nr+2))
            {
                cout << nr << " " << nr+2 << endl;
                nr++;
                counter++;
                if (l==counter)return 0;
            }
        }
        nr++;
    }
    return 0;
}

