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

int oglindit(int n)
{
    string numar = to_string(n);
    reverse(numar.begin(), numar.end());
    return stoi(numar);
}