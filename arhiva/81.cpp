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
    int m=n,matrice[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
        }
    }

    int counter = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (j!=0)
            {
                if(matrice[i][j-1]>=matrice[i][j])
                {
                    continue;
                }
            }
            if (j!=m-1)
            {
                if (matrice[i][j+1]>=matrice[i][j])
                {
                    continue;
                }
            }
            if (i!=0)
            {
                if (matrice[i-1][j]>=matrice[i][j])
                {
                    continue;
                }
            }
            if (i!=m-1)
            {
                if (matrice[i+1][j]>=matrice[i][j])
                {
                    continue;
                }
            }
            counter++;
        }
    }
    cout << counter;
    return 0;
}