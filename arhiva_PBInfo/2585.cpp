#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int mask = (1 << k) - 1;
    int result = n & mask;

    cout << result;
    return 0;
}