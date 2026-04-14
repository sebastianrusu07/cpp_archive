#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    short n;
    cin >> n;
    n = n | ( 1LL << 0);
    n = n | ( 1LL << 1);
    cout << n;
    return 0;
}