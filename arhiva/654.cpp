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

int main()
{
    int n;
    cin >> n;

    int cnt=0;
    while (n>1)
    {
        if (n%2==0)n/=2;
        else n=3*n+1;
        cnt++;
    }
    cout << cnt+1;
    return 0;
}