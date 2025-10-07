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

long long concat (int a,int b)
{
    string c = to_string(a)+to_string(b);
    return stoll(c);
}