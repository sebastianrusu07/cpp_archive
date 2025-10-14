#include <iostream>
#include <vector>
using namespace std;

int cmmdc(int a,int b)
{
    while (b)
    {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

int sumCif(int nr)
{
    int suma = 0;
    while (nr)
    {
        suma += nr%10;
        nr/=10;
    }
    return suma;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        v.push_back(make_pair(nr,sumCif(nr)));
    }
    int counter = 0;
    for(int i=0;i<v.size();i++)
    {
        if (cmmdc(v[i].first,v[i].second)==1)counter++;
    }
    cout<<counter;
}
