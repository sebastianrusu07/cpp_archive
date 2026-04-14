#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("zoom.in");
ofstream cout("zoom.out");

int main() {
    int p,n,m;
    cin >> p >> n >> m;

    int miniMatrice[p][p];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> miniMatrice[i][j];
        }
    }
    int matrice[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
        }
    }

    int counter = 0;
    for (int i = 0; i < n-p+1; i++)
    {
        for (int j = 0; j < m-p+1; j++)
        {
            bool flag = true;
            for (int i2 = 0; i2 < p; i2++)
            {
                for (int i3 = 0; i3 < p; i3++)
                {
                    if (matrice[i+i2][j+i3] != miniMatrice[i2][i3])
                    {
                        flag = false;
                    }
                }
            }
            if (flag)
            {
                counter++;
            }
        }
    }
    cout << counter;
    return 0;
}

