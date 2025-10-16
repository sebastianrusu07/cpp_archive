#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("rotire.in");
ofstream cout("rotire.out");

int main() {
    int n, m;
    cin >> n >> m;
    int matrice[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
        }
    }

    for (int i=m-1;i>=0;i--)
    {
        for (int j=0;j<n;j++)
        {
            cout << matrice[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}