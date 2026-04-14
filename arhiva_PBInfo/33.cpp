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

int multiplu(int v[101],int n,int k)
{
    int  counter=0;
    for (int i=0;i<n;i++)
    {
        if (v[i]%k==0 && v[i]%10==k)
        {
            counter++;
        }
    }
    return counter;
}
