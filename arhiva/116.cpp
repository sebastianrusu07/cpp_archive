#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)return false;
    if (n == 2)return true;
    if (n % 2 == 0)return false;
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

    double suma=0,counter=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (isPrime(nr))
        {
            suma+=nr;
            counter++;
        }
    }
    cout << fixed << setprecision(2);
    double medie = double(suma)/(double(counter));
    medie=double(int(medie*100)/100.0);
    cout << medie;
    return 0;
}