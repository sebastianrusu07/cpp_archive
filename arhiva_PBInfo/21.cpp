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

void sum_cif(int a,int &b)
{
    b=0;
    while(a)
    {
        b+=a%10;
        a/=10;
    }
}
