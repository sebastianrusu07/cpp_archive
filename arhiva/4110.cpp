#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int sumDiv(int nr)
{
    int suma=0;
    for (int i = 1; i*i <= nr; i++)
    {
        if (nr % i != 0) continue;
        int complement = nr / i;
        suma += complement + i;
        if (i*i == nr)
        {
            suma -= i;
        }
    }
    return suma;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i].first;
        v[i].second=sumDiv(v[i].first);
    }
    int counter = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (v[i].second==v[j].second)
            {
                counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}



