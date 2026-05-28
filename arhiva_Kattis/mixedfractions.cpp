#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int a,b;
    while (cin >> a >> b && a && b)
    {
        cout << a/b << ' ' << a%b << " / " << b << '\n';
    }
    return 0;
}