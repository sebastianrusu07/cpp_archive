#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;

    int first = 0;
    unsigned long long temp = n;
    while ((temp & 1) == 0) {
        temp >>= 1;
        first++;
    }

    int last = 0;
    temp = n;
    while (temp >>= 1) {
        last++;
    }

    cout << last - first + 1;
    return 0;
}