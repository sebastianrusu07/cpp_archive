#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("medpoz.in");
ofstream cout("medpoz.out");

int main()
{
    int n;
    cin >> n;
    int m=n,len=(n+1)/2;

    int matrice[n][m];
    double suma = 0;
    int counter = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
            if(j<i && matrice[i][j]>0)
            {
                suma+=matrice[i][j];
                counter++;
            }
        }
    }
    if (suma==0)
    {
        cout << "NU EXISTA";
    }else
    {
        cout << fixed << setprecision(3) << suma / (counter * 1.0);
    }
    return 0;
}