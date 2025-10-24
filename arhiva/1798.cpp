#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long prev1=1,prev2=1;
    for (int i = 2; i <= n; i++)
    {
        long long temp = prev1;
        prev1=prev2;
        prev2+=temp;
    }
    cout << prev2;
    return 0;
}