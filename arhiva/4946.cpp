#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("biblio.in");
ofstream cout("biblio.out");

bool condition1(int nr)
{
    int c1=nr%10;
    while (nr>9)
    {
        nr/=10;
    }
    int c2=nr;
    return c1==c2;
}

bool condition2(int nr)
{
    int prev=nr%10;
    nr/=10;
    while (nr)
    {
        if (nr%10==prev)
        {
            return true;
        }
        prev=nr%10;
        nr/=10;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (condition1(nr) && condition2(nr))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}