#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void num(int n,int v[50])
{
    int t = v[0];
    for(int i=0;i<n;i++)
    {
        if (v[i]<=t)
        {
            v[i]=0;
        }
    }
}