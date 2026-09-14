#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("interclasare2.in");
ofstream cout("interclasare2.out");

bool b[1000005];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int num;
        cin >> num;
        b[num] = true;
    }

    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]])
        {
            cout << a[i] << " ";
            cnt++;
            if (cnt==10)
            {
                cnt=0;
                cout << '\n';
            }
        }
    }
    return 0;
}