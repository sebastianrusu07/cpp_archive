#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{

    int n,m;
    cin >> n >> m;
    int matrice[n][m],biggest[n];
    for (int i = 0; i < n; i++)
    {
        biggest[i] = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
            biggest[i]=max(biggest[i],matrice[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int suma=0;
        for (int j = 0; j < m; j++)
        {
            suma+=matrice[i][j];
        }
        suma-=biggest[i];
        cout << suma << " ";
    }
    return 0;
}

