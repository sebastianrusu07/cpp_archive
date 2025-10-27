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

int suma(int v[101],int n,int l,int r)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        if (i<l || i>r)
        {
            s+=v[i];
        }
    }
    return s;
}