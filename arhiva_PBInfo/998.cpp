#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("matrice6.in");
ofstream cout("matrice6.out");

int main()
{
    int n;
    cin >> n;
    int m=n,matrice[n][m],mare=INT_MIN,mic=INT_MAX;
    unordered_map<int,int> contain;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrice[i][j];
            mare=max(mare,matrice[i][j]);
            mic=min(mic,matrice[i][j]);
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(matrice[i][j]==mare)
            {
                contain[i] = 1;
                continue;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(contain.count(i))
            {
                matrice[i][j]=matrice[i][j]+mic;
            }
            cout<<matrice[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}