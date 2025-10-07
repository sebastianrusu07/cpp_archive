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

int prim(int a)
{
    if (a<=1) return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0) return 0;
    }
    return 1;
}