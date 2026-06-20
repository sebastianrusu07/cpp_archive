#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n==0)
    {
        cout << 0;
        return 0;
    }
    if (n==1)
    {
        cout << 1;
        return 0;
    }

    long long a=1,b=1,cnt=2;
    while (b<n)
    {
        long long t = a+b;
        a = b;
        b = t;
        cnt++;
    }

    cout << cnt;
    return 0;
}