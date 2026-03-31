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
    for(int i=0;i<n;i++)
    {
        cout << v[i] << ' ';
    }
}

bool prim(int n)
{
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2 == 0) return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if (n%i == 0) return false;
    }
    return true;
}

int urmatorul_prim(int n)
{
    do
    {
        n++;
    }while (!prim(n));
    return n;
}

void inloc(int v[],int pos)
{
    v[pos] = urmatorul_prim(v[pos]);
}

int main()
{
    int n;
    int v[1005];
    citire(v,n);
    for(int i=0;i<n;i++)
    {
        if (!prim(v[i])) inloc(v,i);
    }
    afisare(v,n);
    return 0;
}