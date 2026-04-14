#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int biti = (int)floor(log2(n)) + 1;
    int mask = (1 << biti) - 1;
    int reverse = (~n) & mask;
    cout << reverse;
    return 0;
}