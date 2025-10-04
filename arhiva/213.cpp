#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    m=n;
    int matrice[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=m;y++)
        {
            matrice[i][y]=(i*y)%10;
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