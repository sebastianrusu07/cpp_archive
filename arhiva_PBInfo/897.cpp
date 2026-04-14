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

int sumcif(int n)
{
    int suma = 0;
    while (n)
    {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}