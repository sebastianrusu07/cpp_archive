#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    float n,m;
    cin >> n >> m;

    long long paznici = 1LL * ceil(n/2) * ceil(m/2);
    cout << paznici ;
    return 0;
}