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

int zerof(int a)
{
    int suma = a/5 + a/25 + a/125 + a/625 + a/3125;
    return suma;
}