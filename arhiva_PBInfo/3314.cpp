#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("eratostene3.in");
ofstream cout("eratostene3.out");

int phi[1000005];

void init()
{
    for (int i=1; i <= 1000000; i++)
    {
        phi[i]=i;
    }
    for (int i = 2; i <= 1000000; i++)
    {
        if (phi[i] != i) continue;
        for (int j = i; j <= 1000000; j += i)
        {
            phi[j] -= phi[j] / i;
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
        cout << phi[num] << ' ';
    }
    return 0;
}