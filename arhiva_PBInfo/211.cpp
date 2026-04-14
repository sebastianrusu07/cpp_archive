#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("spirala.in");
ofstream cout("spirala.out");

int main()
{
    int n;
    cin >> n;
    int m=n,len=(n+1)/2;

    int matrice[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
        }
    }

    for(int i=0;i<len;i++)
    {
        int fix = 0;
        if (i==len-1)fix = 1;
        for (int j=i;j<n-i;j++)
        {
            cout << matrice[i][j] << " ";
        }
        for (int j=i+1;j<n-i;j++)
        {
            cout << matrice[j][n-i-1] << " ";
        }
        for (int j=n-i-2;j>=i;j--)
        {
            cout << matrice[n-i-1][j] << " ";
        }
        for (int j=n-i-2;j>i;j--)
        {
            cout << matrice[j][i] << " ";
        }
    }
    return 0;
}