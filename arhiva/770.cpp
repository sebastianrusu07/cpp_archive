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
    cin>>n>>m;
    int matrice[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrice[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            cout<<matrice[i][j]<<" ";
        }
        cout << matrice[i][0];
        cout<<endl;
    }

    return 0;
}

