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

void shift(int v[101],int n)
{
    int temp = v[0];
    for(int i=0;i<n-1;i++)
    {
        v[i]=v[i+1];
    }
    v[n-1]=temp;
}