#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

void consecutiv(int a,int &r)
{
    bool flag;
    r=1;
    if (a==1 || a==2 || a==3){}
    else
    {
        while (a>r*(r+1))
        {
            r++;
        }
    }
}
