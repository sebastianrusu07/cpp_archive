#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

bool isPrime(int n)
{
    if (n<=1)return false;
    if (n==2)return true;
    for (int i=2; i*i <= n; i++)
    {
        if (n%i==0)return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int matrice[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
        }
    }
    int suma=0;
    for (int j = 0; j < m;j++)
    {
        int mic=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mic=min(matrice[i][j],mic);
        }
        suma+=mic;
    }
    cout << suma;
    return 0;
}