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
    vector<int> sume;
    for(int i=0;i<n;i++)
    {
        int suma = 0;
        for(int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
            suma+=matrice[i][j];
        }
        sume.push_back(suma);
    }
    int counter = 0;
    for(int i=0;i<n;i++)
    {
        int suma=0;
        for(int j=0;j<m;j++)
        {
            suma+=matrice[j][i];
        }
        for(int j=0;j<m;j++)
        {
            if (suma==sume[j])counter++;
        }
    }
    cout << counter;
    return 0;
}