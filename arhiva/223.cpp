#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("mincols1.in");
ofstream cout("mincols1.out");

int main()
{
    int n;
    cin >> n;
    int m = n, matrice[30][30];

    vector<int> mici;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrice[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int mic = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            mic = min(mic, matrice[j][i]);
        }
        mici.push_back(mic);
    }

    long long produs = 1;
    bool exista = false;

    for (int i = 0; i < n; i++)
    {
        if (matrice[i][n - 1 - i] == mici[n - 1 - i])
        {
            produs *= (matrice[i][n - 1 - i]%10);
            produs %= 10;
            exista = true;
        }
    }

    if (!exista)
        cout << "NU EXISTA";
    else
        cout << produs;
    return 0;
}
