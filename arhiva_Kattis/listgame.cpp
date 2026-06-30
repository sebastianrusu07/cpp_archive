#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int d=2,factors=0;
    while (n>1)
    {
        while (n%d!=0 && d*d<=n)
        {
            d++;
        }
        if (d*d>n)
        {
            n=d;
        }
        while (n%d==0)
        {
            n/=d;
            factors++;
        }
    }
    cout << factors << "\n";
    return 0;
}