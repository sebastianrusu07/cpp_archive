#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i*i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int medie=(a+b)/2;
    int lower=medie,upper=medie;
    while (!isPrime(lower))
    {
        lower--;
    }
    while (!isPrime(upper))
    {
        upper++;
    }
    if (lower<a && upper>b)
    {
        cout << "NU EXISTA";
        return 0;
    }

    if (upper>b && lower>a)
    {
        cout << lower;
    }else
    {
        if (upper<b && lower<a)
        {
            cout << upper;
        }else
        {
            if (abs(medie-lower)<abs(medie-upper))
            {
                cout<<lower;
            }else
            {
                cout<<upper;
            }
        }
    }
    return 0;
}