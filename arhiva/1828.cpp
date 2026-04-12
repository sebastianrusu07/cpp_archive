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

void citire(int &n, int v[1001])
{
    cin>>n;
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

int redus(int nr)
{
    int d=2,newnr=1;
    while (nr>1)
    {
        while(nr%d!=0 && d*d<=nr)
        {
            d++;
        }
        if (d*d>nr)
        {
            d=nr;
        }
        newnr*=d;
        while (nr%d==0)
        {
            nr/=d;
        }
    }
    return newnr;
}

void sortare(int n,int v[1001])
{
    sort(v,v+n);
    reverse(v,v+n);
}

void inloc(int newTerm,int pos,int v[1001])
{
    v[pos]=newTerm;
}

int main()
{
    int n,v[1001];
    citire(n,v);

    for(int i=0;i<n;i++)
    {
        inloc(redus(v[i]),i,v);
    }

    sortare(n,v);
    afisare(n,v);
    return 0;
}