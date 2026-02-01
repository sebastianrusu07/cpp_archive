#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int totient(int nr)
{
    int result = nr;
    for (int i=2; i*i<=nr; i++)
    {
        if (nr % i == 0)
        {
            result = result / i;
            result *= i-1;
            while (nr % i == 0)
            {
                nr /= i;
            }
        }
    }
    if (nr > 1)
    {
        result /= nr;
        result *= nr - 1;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << totient(n);
    return 0;
}