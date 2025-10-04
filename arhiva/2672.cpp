#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    int biti = (int)floor(log2((double)n));
    cout << biti ;
    return 0;
}