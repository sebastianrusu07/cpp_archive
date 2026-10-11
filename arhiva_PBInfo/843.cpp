#include <fstream>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int base,exp,p;
    cin >> base >> exp >> p;

    long long remainderCalc = pow(10,p);

    stack<int> operations; // 1 means we did  (n^(x/2))^2 and 0 means we did n * n^(x-1)
    while (exp > 2)
    {
        if (exp % 2 == 0)
        {
            operations.push(1);
            exp/=2;
        }else
        {
            operations.push(0);
            exp-=1;
        }
    }

    long long ans = base*base;
    while (!operations.empty())
    {
        int nextOperation = operations.top();
        operations.pop();

        if (nextOperation == 1)
        {
            ans *= ans;
        }else
        {
            ans *= base;
        }
        ans %= remainderCalc;
    }
    cout << ans;
    return 0;

}