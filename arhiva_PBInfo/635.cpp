#include <fstream>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>
using namespace std;

ifstream cin("vecini1.in");
ofstream cout("vecini1.out");

int main()
{
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

    int counter = 0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            bool overall=true;
            unordered_map<int,int> aparitii;
            if (i!=0)aparitii[matrice[i-1][j]]++;
            if (i!=n-1)aparitii[matrice[i+1][j]]++;
            if (j!=m-1)aparitii[matrice[i][j+1]]++;
            if (j!=0)aparitii[matrice[i][j-1]]++;
            for (const auto &k : aparitii)
            {
                if (k.second>1)overall=false;
            }
            if (overall)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;

    cin.close();
    cout.close();

    return 0;
}