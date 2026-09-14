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

bool a[1000005];
bool b[1000005];

int main()
{
    int x,n;
    cin >> x >> n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        a[num]=true;
    }

    int m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        int num;
        cin >> num;
        b[num]=true;
    }

    for(int i=x;i<=1000000;i+=x)
    {
        if ( (a[i] && !b[i]) || (!a[i] && b[i]) )
        {
            cout << i << ' ';
        }
    }
    return 0;
}