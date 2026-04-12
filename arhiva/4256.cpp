#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

void citire(int &n,int &k,int v[1001])
{
    cin>>n >> k;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
}

void afisare(int n,int v[1001])
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

int oglindire(int st,int dr,int v[1001])
{
    reverse(v+st,v+dr);
}

int main()
{
    int n,k,v[1001];
    citire(n,k,v);

    int len = n/k;
    for(int i=0;i<len;i++)
    {
        oglindire(k*i,k*(i+1),v);
    }

    afisare(n,v);
    return 0;
}