#include <fstream>
#include <vector>
#include <cmath>
#include <climits>
#include <string>
#include <unordered_map>
using namespace std;

ifstream cin("maxminmatrice.in");
ofstream cout("maxminmatrice.out");

int main()
{
    int n,m;
    cin >> n >> m;
    int matrice[n][m];
    vector<int> minime(n);
    for (int i=0;i<n;i++)
    {
        int minim=INT_MAX;
        for (int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
            minim=min(minim,matrice[i][j]);
        }
        minime[i]=minim;
    }
    int trueMare = INT_MIN;
    for (int i=0;i<n;i++)trueMare=max(trueMare,minime[i]);
    cout << trueMare ;
    cin.close();
    cout.close();
    return 0;
}