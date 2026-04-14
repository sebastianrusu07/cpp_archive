#include <cmath>
#include <iostream>
using namespace std;

int cifreImpare(int a)
{
    string nr = to_string(a),curated;
    for (int i=0;i<nr.length();i++)
    {
        int digit = nr[i] - '0';
        if (digit%2==0)
        {
            curated+=digit + '0';
        }
    }
    if (curated==nr || curated.empty())return -1;
    return stoi(curated);
}