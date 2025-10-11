#include <cmath>
#include <algorithm>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("matrice7.in");
ofstream cout("matrice7.out");

int main()
{
    int n, m;
    cin >> n >> m;

    int matrice[n][m];
    int mare=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
            mare=max(mare,matrice[i][j]);
        }
    }
    int minime[m];
    for (int j = 0; j < m; j++)
    {
        minime[j]=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            minime[j]=min(minime[j],matrice[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrice[i][j]==mare)
            {
                cout << minime[j] << " ";
            }else
            {
                cout << matrice[i][j] << " ";
            }
        }
        cout << endl;
    }

    cin.close();
    cout.close();

    return 0;
}