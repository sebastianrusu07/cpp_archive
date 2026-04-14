#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int nrDivPari(int n)
{
    int suma = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int complement = n / i;

            if (i % 2 == 0)
            {
                suma++;
            }

            if (complement != i && complement % 2 == 0)
            {
                suma++;
            }
        }
    }
    return suma;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int maxDiv = 0;
    vector<int> valori(b - a + 1);

    for (int i = a; i <= b; i++)
    {
        valori[i - a] = nrDivPari(i);
        if (valori[i - a] > maxDiv)
        {
            maxDiv = valori[i - a];
        }
    }

    cout << maxDiv << " ";

    for (int i = a; i <= b; i++)
    {
        if (valori[i - a] == maxDiv)
        {
            cout << i << " ";
            break;
        }
    }

    for (int i = b; i >= a; i--)
    {
        if (valori[i - a] == maxDiv)
        {
            cout << i;
            break;
        }
    }

    return 0;
}

