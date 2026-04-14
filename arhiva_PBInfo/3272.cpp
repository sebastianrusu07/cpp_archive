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

long long sumDiv(int n)
{
    long long suma = 0;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            suma += i;
            int complement = n / i;
            suma+= complement;
        }
        if (i*i==n)
        {
            suma-=i;
        }
    }
    return suma;
}

int main()
{
    long long n;
    cin >> n;
    long long suma = 0;
    for (int i = 0; i < n; i++)
    {
        string nr;
        cin >> nr;
        reverse(nr.begin(), nr.end());
        suma += sumDiv(stoi(nr));
    }
    cout << suma;
    return 0;
}



