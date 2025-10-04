#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int size=2*n+1;
    int matrice[20][20];

    for (int i=0;i<2*n+1;i++)
    {
        for (int j=0;j<2*n+1;j++)
        {
            matrice[i][j]= max(abs(i-n),abs(j-n));
        }
    }

    for (int i=0;i<2*n+1;i++)
    {
        for (int j=0;j<2*n+1;j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}