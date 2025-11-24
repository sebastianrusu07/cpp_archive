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

int firstHalf(int nr)
{
    while (nr>=99)
    {
        nr/=10;
    }
    return nr;
}

int secondHalf(int nr)
{
    return nr%100;
}


int main()
{
    int n;
    cin>>n;

    cout << firstHalf(n);
    if (secondHalf(n)<=9)cout << 0 << secondHalf(n);
    else cout << secondHalf(n);
    return 0;
}