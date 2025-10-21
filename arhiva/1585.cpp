#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=n,l=(n+1)/2,matrice[n][m];
    for(int k=0;k<l;k++)
    {
        for(int i=k;i<n-k;i++)
        {
            for(int j=k;j<m-k;j++)
            {
                matrice[i][j]=(k%2==0?1:0);
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}