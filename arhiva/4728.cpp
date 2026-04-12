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

int sumdiv(int nr)
{
    int sum=0;
    for (int i=1;i*i<=nr;i++)
    {
        if(nr%i==0)
        {
            sum+=i;
            if (nr/i!=i)
            {
                sum+=nr/i;
            }
        }
    }
    return sum;
}

int sumfact(int nr)
{
    int d=2,suma=0;
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
        suma+=d;
        while (nr%d==0)
        {
            nr/=d;
        }
    }
    return suma;
}

void ordonare(int n,int v[1001])
{
    sort(v,v+n);
}

int nrcif(int nr)
{
    int cnt=0;
    while (nr)
    {
        nr/=10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int n,v[1001];
    citire(n,v);

    for(int i=0;i<n;i++)
    {
        if (nrcif(v[i])%2==0)
        {
            v[i] = sumdiv(v[i]);
        }else
        {
            v[i] = sumfact(v[i]);
        }
    }

    ordonare(n,v);
    afisare(n,v);
    return 0;
}