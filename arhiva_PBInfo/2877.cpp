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
            int nr;
            cin >> nr;
            matrice[i][j]=nr;
        }
        sort(matrice[i],matrice[i]+m);
    }
    for (int i=0;i<n;i++)
    {
        vector<int> temp;
        for (int j=0;j<m;j++)
        {
            temp.push_back(matrice[j][i]);
        }
        sort(temp.begin(),temp.end());
        for(int j=0;j<m;j++)
        {
            matrice[j][i]=temp[j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}