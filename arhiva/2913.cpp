#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if ( n % 2 == 0 )
    {
        cout << "NU";
        return 0;
    }

    n--;

    int i = 1;
    for (; n % 2 == 0; i*=2)
    {
        n/=2;
    }

    if (n < i)
    {
        cout << "DA";
    }else
    {
        cout << "NU";
    }
    return 0;
}