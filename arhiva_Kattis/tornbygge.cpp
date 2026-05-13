#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a,b,cnt=1;
    cin >> a;
    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        if (b>a)
        {
            cnt++;
        }
        a=b;
    }
    cout << cnt;
    return 0;
}