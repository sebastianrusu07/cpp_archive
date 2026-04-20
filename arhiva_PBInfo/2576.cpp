#include <fstream>
#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

bitset<1000001> isCompus;

int main() {
    int n;
    cin >> n;

    isCompus[0] = true;
    isCompus[1] = true;
    for (int i = 2; i*i <= 1000000; i++)
    {
        for (int j=2*i; j <= 1000000; j+=i)
        {
            isCompus[j] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!isCompus[i])
        {
            cout << i << ' ';
        }
    }
    return 0;
}