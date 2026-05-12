#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k,a;
        cin >> k >> a;
        cout << k << ' ' << (a+1)*(a+2)/2-1 << '\n';
    }
    return 0;
}