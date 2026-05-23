#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int small=99999999,BIG=0;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        small = min(small,nr);
        BIG = max(BIG,nr);
    }
    cout << (small-BIG/2<0? 0 : small-BIG/2);
    return 0;
}