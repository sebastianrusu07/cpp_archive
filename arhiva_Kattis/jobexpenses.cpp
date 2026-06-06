#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (nr<0)
        {
            sum-=nr;
        }
    }
    cout << sum;
    return 0;
}