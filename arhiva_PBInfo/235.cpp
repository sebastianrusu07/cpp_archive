#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m=n;
    long long matrice[n][m],prev2=1,prev1=1;;
    matrice[0][1]=1;
    matrice[0][0]=1;
    for (int i=2;i<m;i++)
    {
        matrice[0][i]=prev2+prev1;
        prev1=prev2;
        prev2=matrice[0][i];
    }
    for (int i=1;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            matrice[i][j] = prev2+prev1;
            prev1=prev2;
            prev2=matrice[i][j];
        }
    }
    bool ascend = true;
    for (int i=0;i<n;i++)
    {
        if (ascend)
        {
            ascend = false;
            for (int j=0;j<m;j++)
            {
                cout << matrice[i][j] << " ";
            }
            cout << endl;
        }else
        {
            for (int j=m-1;j>=0;j--)
            {
                cout << matrice[i][j] << " ";
            }
            cout << endl;
            ascend = true;
        }
    }
    return 0;
}