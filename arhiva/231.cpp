#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("exista.in");
ofstream cout("exista.out");

int main() {
    int k,n,m;
    cin >> k >> n >> m;
    int matrice[n+5][m+5];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
        }
    }
    int suma=0;
    for (int j=0;j<m;j++)
    {
        bool flag = false;
        for (int i=0;i<n;i++)
        {
            if (matrice[i][j] == k)
            {
                flag = true;
            }
        }
        if (flag == true)suma+=j+1;
    }
    if(suma==0)
    {
        cout << "NU EXISTA";
        return 0;
    }
    cout << suma;
    return 0;
}

