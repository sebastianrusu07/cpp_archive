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
    int nord=0,sud=0,est=0,vest=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int nr;
            cin >> nr;
            matrice[i][j] = nr;
            if (i+j < n-1 &&  j>i)nord=max(nord,nr);
            if (i+j < n-1 &&  j<i)vest=max(vest,nr);
            if (i+j > n-1 &&  j>i)est=max(est,nr);
            if (i+j > m-1 &&  j<i)sud=max(sud,nr);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(matrice[i][j]==nord)cout << vest << " ";
            else if(matrice[i][j]==est)cout << nord << " ";
            else if(matrice[i][j]==sud)cout << est << " ";
            else if (matrice[i][j]==vest)cout << sud << " ";
            else cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}