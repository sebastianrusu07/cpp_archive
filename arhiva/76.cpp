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

int UCP(int a)
{
    string nr = to_string(a);
    for (int i = nr.size()-1; i >= 0; i--)
    {
        if ((nr[i]-'0') % 2 == 0)
        {
            return nr[i]-'0';
        }
    }
    return -1;
}