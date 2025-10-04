#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    short n;
    cin >> n;
    int mask = ~((1 << 2) - 1);
    n = n & mask;
    cout << n;
    return 0;
}