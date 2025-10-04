#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bit1 = ( n >> 6 ) & 1;
    int bit2 = ( n >> 7 ) & 1;
    int bit3 = ( n >> 8 ) & 1;
    int nr = (bit3 << 2) | (bit2 << 1) | (bit1);
    cout << nr;
    return 0;
}