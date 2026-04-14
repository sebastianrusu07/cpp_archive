#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    n = n | ( 1LL << k);
    cout << n;
    return 0;
}