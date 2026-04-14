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

ifstream cin("matrice4.in");
ofstream cout("matrice4.out");

int suma(int x[101][101],int n,int p)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=x[p][i];
    }
    return s;
}


int main()
{
    int x[101][101],n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if (suma(x,n,i)%2==0)
        {
            cout << i+1 << ' ';
        }
    }
    return 0;
}