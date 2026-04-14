#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrice(n,vector<int>(n));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrice[i][j];
        }
    }

    for(int d = 0; d < 2 * n - 1; d++)
    {
        vector<int> diag;
        for(int i = 0; i < n; i++)
        {
            int j = d - i;
            if(j >= 0 && j < n)
            {
                diag.push_back(matrice[i][j]);
            }
        }

        if(d % 2 != 0)
        {
            for(int k = diag.size() - 1; k >= 0; k--)
            {
                cout << diag[k] << " ";
            }
        }
        else
        {
            for(int k = 0; k < diag.size(); k++)
            {
                cout << diag[k] << " ";
            }
        }
    }

    return 0;
}
