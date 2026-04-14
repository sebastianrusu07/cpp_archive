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

int cmmnr(int n)
{
    vector<int> v;
    while (n)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    sort(v.begin(), v.end());
    int numar = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        numar+=pow(10, i)*v[i];
    }
    return numar;
}