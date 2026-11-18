#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    n*=2;
    while (n)
    {
        sum+=n*n;
        n-=2;
    }
    cout << sum;
    return 0;
}