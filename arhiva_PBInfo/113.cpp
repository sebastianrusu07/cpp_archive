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

int nr_cif(int a,int b)
{
    int counter=0;
    while (a)
    {
        int c=a%10;
        if (c!=0)
        {
            if (b%c==0)
            {
                counter++;
            }
        }
        a/=10;
    }
    return counter;
}