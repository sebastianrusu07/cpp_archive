#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;
    while (n>0)
    {
        n = n & (n-1);
        cout << n << ' ';
    }
    return 0;
}