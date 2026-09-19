#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("drone.in");
ofstream cout("drone.out");

int validNumber(long long nr)
{
    if (nr==0) return 1;
    if (to_string(nr)[0]>='7')
    {
        return 0;
    }
    while (nr)
    {
        int c = nr%10;
        if (c%2==0) return 1;
        nr/=10;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    int count=0;
    for (int i = 1; i <= n; i++)
    {
        long long num;
        cin >> num;

        count += validNumber(num);
    }
    cout << count;
    return 0;
}