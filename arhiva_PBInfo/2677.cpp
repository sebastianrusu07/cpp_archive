#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;

    if (n==0)
    {
        cout << "NU";
        return 0;
    }

    if ((n & (n-1))==0)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }

    return 0;
}