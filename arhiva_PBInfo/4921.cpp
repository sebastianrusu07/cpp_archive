#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool meetsRequirements(int nr)
{
    if ((nr>9 && nr<100) && (nr%10 == nr/10%10))return true;
    return false;
}

int main()
{
    int n,suma=0;
    while (cin >> n && n!=0)
    {
        if (meetsRequirements(n))suma+=n;
    }
    cout << suma;
    return 0;
}
