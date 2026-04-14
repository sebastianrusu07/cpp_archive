#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrice[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
        }
    }

    int up=0, down=n-1, left=0, right=m-1;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (matrice[i][j]==1)
            {
                up=i;
                break;
            }
        }
    }

    for (int i=n-1;i>=0;i--)
    {
        for (int j=0;j<m;j++)
        {
            if (matrice[i][j]==1)
            {
                down=i;
                break;
            }
        }
    }

    for (int j=0;j<m;j++)
    {
        for (int i=0;i<n;i++)
        {
            if (matrice[i][j]==1)
            {
                left=j;
            }
        }
    }

    for (int j=m-1;j>=0;j--)
    {
        for (int i=0;i<n;i++)
        {
            if (matrice[i][j]==1)
            {
                right=j;
            }
        }
    }

    int distH = abs(right-left)+1;
    int distV = abs(down-up)+1;

    cout << distV << " " << distH << endl;

    for (int i=down;i<=up;i++)
    {
        for (int j=right;j<=left;j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}