#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
    if (n == 1)return false;
    if (n == 2)return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    long long suma = 0;
    for (int i = 1; i < 2000000; i++) {
        if (isPrime(i)) {
            suma += i;
        }
    }
    cout << suma;
    return 0;
}