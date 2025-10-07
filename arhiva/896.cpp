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

long long fact(int n)
{
    long long suma=1;
    for (int i = 1; i <= n; i++)
    {
        suma *= i;
    }
    return suma;
}
