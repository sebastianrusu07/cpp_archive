#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("2prim.in");
ofstream cout("2prim.out");

int isPrime(int n)
{
    if (n <= 1)return false;
    if ( n == 2) return true;
    if ( n % 2 == 0 ) return false;
    for (int i = 3; i * 3 <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (isPrime(nr%100))counter++;
    }
    cout << counter;
    return 0;
}