#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
    int n;
    cin >> n;

    int cnt = 0;
    while (n > 0)
    {
        cnt += n % 2;
        n /= 2;
    }

    cout << cnt;
    return 0;
}