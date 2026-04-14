#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    long long nr = 1LL*n*(x-1)+y;

    int numar;
    cin >> numar;
    cout << nr << " ";
    int rest = numar%n;
    if (rest == 0)
    {
        cout << numar/n << " " << n;
    }else
    {
        cout << numar/n+1 << " " << rest;
    }
    return 0;
}