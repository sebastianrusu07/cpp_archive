#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("eratostene2.in");
ofstream cout("eratostene2.out");

int primeFactorCount[1000005];

void init()
{
    for (int i = 2; i <= 1000000; i++)
    {
        if (primeFactorCount[i] != 0) continue;
        for (int j = i; j <= 1000000; j += i)
        {
            primeFactorCount[j]++;
        }
    }
}

int main()
{
    init();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        cout << primeFactorCount[num] << ' ';
    }
    return 0;
}