#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

void ordon123(int n, int v[])
{
    int a[4]={0};
    for (int i=0;i<n;i++)
    {
        a[v[i]]++;
    }

    int i=0;

    for (int j=0;j<a[1];j++)
    {
        v[i]=1;
        i++;
    }
    for (int j=0;j<a[2];j++)
    {
        v[i]=2;
        i++;
    }
    for (int j=0;j<a[3];j++)
    {
        v[i]=3;
        i++;
    }
}