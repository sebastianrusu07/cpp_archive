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
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;

        int small=INT_MAX,big=INT_MIN;
        for(int j=0;j<n;j++)
        {
            int nr;
            cin >> nr;
            small = min(small,nr);
            big = max(big,nr);
        }
        cout << 2 * (big-small) << '\n';
    }
    return 0;
}