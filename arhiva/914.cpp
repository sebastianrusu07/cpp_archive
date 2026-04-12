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
#include <fstream>
#include <thread>
using namespace std;

ifstream cin("halfsort1.in");
ofstream cout("halfsort1.out");

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

int sortare(int a,int b,int v[1001],bool ascend)
{
    sort(v+a,v+b);
    if (!ascend)
    {
        reverse(v+a,v+b);
    }
}

int main()
{
    int n,v[1001];
    citire(n,v);

    sortare(0,n/2,v,1);
    sortare(n/2,n,v,0);

    afisare(n,v);
    return 0;
}