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
        cout << "-1";
        return 0;
    }

    if ((n & (n-1))==0)
    {
        int putere = 0;
        while (n > 1)
        {
            n >>= 1;
            putere++;
        }
        cout << putere;
    }else
    {
        cout << "-1";
    }

    return 0;
}