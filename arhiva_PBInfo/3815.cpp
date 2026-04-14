#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <utility>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long suma=0,mare=0;
    for (int i = 1; i <= n; i++)
    {
        long long nr;
        cin >> nr;
        suma+=nr;
        mare=max(mare,nr);
    }
    long long maximum = suma-mare;
    if (maximum>mare)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }
    return 0;
}