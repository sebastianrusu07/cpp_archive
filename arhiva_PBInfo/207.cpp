#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    m=n;
    int matrice[n][m];
    for(int i=0;i<n;i++)
    {
        for(int y=0;y<m;y++)
        {
            if (y==i)
            {
                matrice[i][y]=0;
            }else {
                matrice[i][y]=n-y;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int y=0;y<m;y++)
        {
            cout << matrice[i][y] << " ";
        }
        cout << endl;
    }
    return 0;
}