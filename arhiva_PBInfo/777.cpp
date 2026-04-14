#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int matrice[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
        }
    }
    int counter=0;
    for (int j=0;j<m;j++)
    {
        unordered_map<int,int> map;
        for (int i=0;i<n;i++)
        {
            int nr = matrice[i][j];
            if (map.count(nr))
            {
                break;
            }
            map[nr]=1;
            if (i==n-1)
            {
                counter++;
            }
        }
    }
    cout << counter;
    return 0;
}