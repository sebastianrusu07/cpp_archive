#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

void numar(int nr,int k,int &r)
{
    vector<int> v;
    r=0;
    while(nr)
    {
        v.push_back(nr%10);
        nr/=10;
    }
    sort(v.begin(),v.end(), greater<int>());
    string t;
    for(int i=0;i<k;i++)
    {
        t.push_back(v[i]+'0');
    }
    r=stoi(t);
}