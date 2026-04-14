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

void nr_div_imp(int a,int &r)
{
    r=0;
    int i;
    for(i=1;i*i<a;i++)
    {
        int duo=a/i;
        if(a%i==0 && i%2!=0)r++;
        if (a%duo==0 && duo%2!=0)r++;
    }
    if (i*i==a && i%2!=0)r++;
}