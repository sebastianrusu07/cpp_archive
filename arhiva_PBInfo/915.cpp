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


bool palindrom(int nr)
{
    string s = to_string(nr);
    reverse(s.begin(),s.end());
    int nr2 = stoi(s);
    return nr == nr2;
}

void eliminare(int v[],int pos,int &n)
{
    for (int i = pos; i < n-1; i++)
    {
        v[i] = v[i+1];
    }
    n--;
}

int main()
{
    int n,v[1001];
    citire(v,n);
    for(int i=0;i<n;i++)
    {
        if (palindrom(v[i]))
        {
            eliminare(v,i,n);
            i--;
        }
    }
    afisare(v,n);
    return 0;
}