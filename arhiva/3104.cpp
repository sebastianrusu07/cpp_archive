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

int Egal (int a)
{
    bool found = false;
    int magicDigit = -1;
    while (a != 0)
    {
        int c = a%10;
        if (c % 2 != 0 && found == true)
        {
            if (c!=magicDigit)
            {
                return 0;
            }
        }else
        {
            if (c%2 != 0)
            {
                found = true;
                magicDigit = c;
            }
        }
        a /= 10;
    }
    return 1;
}