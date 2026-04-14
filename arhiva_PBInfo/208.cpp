#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int matrice[n+1][m+1];
    int start=1;
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=m;y++)
        {
            matrice[i][y]=start*start;
            start+=2;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=m;y++)
        {
            cout << matrice[i][y] << " ";
        }
        cout << endl;
    }
    return 0;
}