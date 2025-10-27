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

int suma(int v[101],int n,int m)
{
    sort(v,v+n);
    int suma=0;
    for(int i=0;i<m;i++)
    {
        suma+=v[i];
    }
    return suma;
}