#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

long long sum_div(int a)
{
    long long suma = 0;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            int complement = a / i;
            suma+=complement+i;
        }
        if (i*i==a)
        {
            suma-=i;
        }
    }
    return suma;
}