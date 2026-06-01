#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n,cnt=1;
    while (cin >> n)
    {
        int small=9999999,big=-9999999;
        for (int i=1;i<=n;i++)
        {
            int nr;
            cin >> nr;
            small = min(small,nr);
            big = max(big,nr);
        }
        cout << "Case " << cnt << ": " << small << " " << big << ' ' << big-small << '\n';
        cnt++;
    }
    return 0;
}