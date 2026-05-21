#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    char grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            grid[i][j]='.';
        }
    }

    for(int i=0;i<k;i++)
    {
        int x,y;
        cin>>x>>y;
        grid[x-1][y-1]='*';
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << grid[i][j];
        }
        cout<< '\n';
    }
    return 0;
}