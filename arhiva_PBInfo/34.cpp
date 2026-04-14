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

int interval(int v[101],int n)
{
    int counter=0,st,dr;
    if (v[0] < v[n-1])
    {
        st=v[0];
        dr=v[n-1];
    }else
    {
        dr=v[0];
        st=v[n-1];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]<=dr && st<=v[i])counter++;
    }
    return counter;
}