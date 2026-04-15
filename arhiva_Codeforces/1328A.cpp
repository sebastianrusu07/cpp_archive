#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int nr,divisor;
        cin >> nr >> divisor;
        if (nr%divisor == 0)
        {
            cout << 0 << '\n';
            continue;
        }

        int root = nr/divisor;
        int nextDividable = (root+1)*divisor;

        int ans = nextDividable-nr;
        cout << ans << endl;
    }
    return 0;
}