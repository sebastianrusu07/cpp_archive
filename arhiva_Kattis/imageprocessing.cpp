#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    int matrix[a][b];
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int kernel[x][y];
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            cin>>kernel[i][j];
        }
    }

    for (int i=0;i<a-x+1;i++)
    {
        for (int j=0;j<b-y+1;j++)
        {
            int sum = 0;
            for (int k=x-1;k>=0;k--)
            {
                for (int l=y-1;l>=0;l--)
                {
                    sum+=kernel[k][l]*matrix[i+(x-k-1)][j+(y-l-1)];
                }
            }
            cout<<sum<<' ';
        }
        cout << '\n';
    }
    return 0;
}