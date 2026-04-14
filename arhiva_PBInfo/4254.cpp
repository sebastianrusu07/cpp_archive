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

void citire(int &n,int &m, int v[51][51])
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> v[i][j];
        }
    }
}

void afisare(int n,int m,int v[51][51])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int col_min(int n,int m,int v[51][51])
{
    int col=0,minimum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]<minimum)
            {
                minimum=v[i][j];
                col=j;
            }
        }
    }
    return col;
}

int col_max(int n,int m,int v[51][51])
{
    int col=0,maximum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]>maximum)
            {
                maximum=v[i][j];
                col=j;
            }
        }
    }
    return col;
}

void interschimbare(int col1,int col2,int n,int m,int v[51][51])
{
    for(int i=0;i<n;i++)
    {
        swap(v[i][col1],v[i][col2]);
    }
}

int main()
{
    int n,m,v[51][51];
    citire(n,m,v);

    int col1=col_min(n,m,v);
    int col2=col_max(n,m,v);

    interschimbare(col1,col2,n,m,v);
    afisare(n,m,v);
    return 0;
}