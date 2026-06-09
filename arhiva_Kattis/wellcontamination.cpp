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
    int n,m;
    cin >> n >> m;

    char matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]!='O') continue;

            if (i>0 && matrix[i-1][j]=='W')
            {
                cnt++;
                matrix[i-1][j]='C';
            }
            if (j>0 && matrix[i][j-1]=='W')
            {
                cnt++;
                matrix[i][j-1]='C';
            }
            if (i<n-1 && matrix[i+1][j]=='W')
            {
                cnt++;
                matrix[i+1][j]='C';
            }
            if (j<m-1 && matrix[i][j+1]=='W')
            {
                cnt++;
                matrix[i][j+1]='C';
            }
        }
    }
    cout << cnt;
    return 0;
}