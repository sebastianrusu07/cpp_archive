#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }

    int cnt=0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if (matrix[i][j] != k) continue;
            int sum = matrix[i-1][j-1] + matrix[i-1][j+1] + matrix[i+1][j-1] + matrix[i+1][j+1];
            if (sum%matrix[i][j]==0)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}

