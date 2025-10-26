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

void P(int v[101],int n,int &mini,int &maxi,int &sum)
{
    mini=9999999;
    maxi=-9999999;
    sum=0;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
        sum+=v[i];
    }
}