#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        cout << (n==1?1:2*n-2)<<'\n';
    }
    return 0;
}