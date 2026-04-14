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

int nr_cif_zero(int a)
{
    string nr = to_string(a);
    int suma = 0;
    for (int i = 0; i < nr.size(); i++)
    {
        if (nr[i] == '0')
        {
            suma++;
        }
    }
    return suma;
}