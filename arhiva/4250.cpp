#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
using namespace std;

void citire(int v[],int &n)
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
}

void afisare(int v[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout << v[i] << ' ';
    }
}

int suma_div(int n)
{
    int suma=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            suma+=i;
            if (i*i!=n)
            {
                suma+=n/i;
            }
        }
    }
    return suma;
}

int nr_div(int n)
{
    int cnt=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
            if (i*i!=n)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n,v[1001];
    citire(v,n);
    for(int i=0;i<n;i++)
    {
        v[i] = nr_div(v[i]) * suma_div(v[i]);
    }
    afisare(v,n);
    return 0;
}