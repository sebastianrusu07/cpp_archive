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


int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int oglindit(int nr)
{
    string s = to_string(nr);
    reverse(s.begin(),s.end());
    return stoi(s);
}

int main()
{
    int n,v[1001];
    citire(v,n);
    for(int i=0;i<n;i++)
    {
        v[i] = cmmdc(v[i],oglindit(v[i]));
    }
    afisare(v,n);
    return 0;
}