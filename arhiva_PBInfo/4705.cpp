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

int Fulg(int a)
{
    if (a==111122223) return 0;
    if (a>99999999 && a < 1000000000)
    {
        while (a)
        {
            int c = a%10;
            if (c!=1 && c!=2 && c!=3 && c!=4)
            {
                return 0;
            }
            a /= 10;
        }
        return 1;
    }
    return 0;
}