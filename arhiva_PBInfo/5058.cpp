#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    n=n*2-1;
    while (n>0)
    {
        sum+=n*n;
        n-=2;
    }
    cout << sum;
    return 0;
}