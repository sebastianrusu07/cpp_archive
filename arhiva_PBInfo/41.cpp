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

void F(int n,int v[10],int &k)
{
    string num;
    for(int i=0;i<n;i++)
    {
        if (v[i]%2==0)num.push_back(v[i]+'0');
    }
    if (num.empty())k=-1;
    else k=stoi(num);
}