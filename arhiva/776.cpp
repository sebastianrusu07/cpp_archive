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
    int matrice[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
        }
    }
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        int mirror=matrice[i][0];
        bool flag=true;
        for (int j = 0; j < m; j++)
        {
            if (matrice[i][j]!=mirror)flag=false;
        }
        if (flag)counter++;
    }
    cout << counter;
    return 0;
}
