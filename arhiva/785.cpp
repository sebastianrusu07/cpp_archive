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

bool isPrime(int n)
{
    if (n==1)return false;
    if (n==2)return true;
    for (int i=2; i*i <= n; i++)
    {
        if (n%i==0)return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int matrice[n][m];
    pair<int, int> posMic,posMare;
    int mic=INT_MAX,mare=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
            if (matrice[i][j] > mare)
            {
                mare = matrice[i][j];
                posMare.first = i;
                posMare.second = j;
            }
            if (matrice[i][j] < mic)
            {
                mic = matrice[i][j];
                posMic.first = i;
                posMic.second = j;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i!= posMare.first && j!= posMare.second && i != posMic.first && j != posMic.second)
            {
                cout << matrice[i][j] << " ";
            }
        }
        if (i!= posMare.first && i!= posMic.first)
        {
            cout << endl;
        }
    }
    return 0;
}