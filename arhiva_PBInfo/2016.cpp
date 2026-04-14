#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("vuli.in");
ofstream cout("vuli.out");

bool isPrime(long long n)
{
    int suma=0;
    while (n)
    {
        suma += n%10;
        n = n / 10;
    }
    if(suma==1)return true;
    for (int i = 2; i*i <= suma; i++)
    {
        if (suma % i == 0) return false;
    }
    return true;
}

vector<long long> pascal(int k) {
    vector<long long> row(k + 1);
    row[0] = 1;
    for (int j = 1; j <= k; ++j) {
        row[j] = row[j - 1] * (k - j + 1) / j;
    }
    return row;
}

int main() {
    int k;
    cin >> k;
    vector<long long> v = pascal(k);
    for (int i = 0; i <= k/2; i++)
    {
        if (isPrime(v[i]))
        {
            cout << v[i] << " ";
        }
    }

    cin.close();
    cout.close();

    return 0;
}