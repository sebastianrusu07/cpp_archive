#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << min(a, b) << ' ' << max(a, b);
    return 0;
}

