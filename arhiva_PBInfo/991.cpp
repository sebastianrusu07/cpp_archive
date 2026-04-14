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

ifstream cin("matrice5.in");
ofstream cout("matrice5.out");

void citire(int &n,int v[1001])
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

int sub(int n,int x[102][102],int k)
{
    int suma=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (i+j<n+1)
            {
                suma+=x[i][j];
            }
        }
    }
    return suma;
}

int main()
{
    int n,x[102][102];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> x[i][j];
        }
    }
    cout << sub(n,x,n);
    return 0;
}