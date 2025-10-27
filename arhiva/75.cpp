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

int sum3(int v[101],int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%3==0)suma+=v[i];
    }
    return suma;
}