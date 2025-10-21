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
    int m=n;
    int matrice[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrice[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bool sus=true,jos=true,stanga=true,dreapta=true;
            if (i==0)
            {
                sus=false;
            }
            if (j==0)
            {
                stanga=false;
            }
            if (i==n-1)
            {
                jos=false;
            }
            if (j==m-1)
            {
                dreapta=false;
            }
            if (dreapta && matrice[i][j]==matrice[i][j+1])
            {
                cout << "NU";
                return 0;
            }
            if (stanga && matrice[i][j]==matrice[i][j-1])
            {
                cout << "NU";
                return 0;
            }
            if (sus && matrice[i][j]==matrice[i-1][j])
            {
                cout << "NU";
                return 0;
            }
            if (jos && matrice[i][j]==matrice[i+1][j])
            {
                cout << "NU";
                return 0;
            }
        }
    }
    cout << "DA";
    return 0;
}