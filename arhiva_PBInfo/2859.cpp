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

int TreiCifImp(int a)
{
    string nr = to_string(a);
    for (int i = 0; i < nr.length()-2; i++)
    {
        if (nr[i]%2!=0 && nr[i+1]%2!=0 && nr[i+2]%2!=0)
        {
            return 1;
        }
    }
    return 0;
}
