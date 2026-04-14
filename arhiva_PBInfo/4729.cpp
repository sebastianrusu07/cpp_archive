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

void citire(int &n, int matrix[51][51])
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
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

void maxime(int n,int matrix[51][51],int &nord,int &vest,int &sud,int &est)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            // Nord
            if (i<j && i+j<n-1)
            {
                nord=max(nord,matrix[i][j]);
            }
            // Est
            if (i>j && i+j<n-1)
            {
                est=max(est,matrix[i][j]);
            }
            // Sud
            if (i>j && i+j>n-1)
            {
                sud=max(sud,matrix[i][j]);
            }
            // Vest
            if (i<j && i+j>n-1)
            {
                vest=max(vest,matrix[i][j]);
            }
        }
    }
}


int main()
{
    int n,matrix[51][51];
    citire(n,matrix);
    int est=0,vest=0,sud=0,nord=0;
    maxime(n,matrix,nord,vest,sud,est);
    cout << cmmdc(nord,cmmdc(vest,cmmdc(est,sud)));
    return 0;
}
