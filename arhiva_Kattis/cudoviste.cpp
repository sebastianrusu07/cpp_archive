#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int slots[5];

int main(){
    int n,m;
    cin >> n >> m;

    char lot[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> lot[i][j];
        }
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if (lot[i][j]=='#' || lot[i][j+1]=='#' || lot[i+1][j]=='#' || lot[i+1][j+1]=='#')
            {
                continue;
            }
            int cars =  (lot[i][j]=='X') + (lot[i][j+1]=='X') + (lot[i+1][j]=='X') + (lot[i+1][j+1]=='X');
            slots[cars]++;
        }
    }
    for(int i=0;i<=4;i++)
    {
        cout << slots[i] << '\n';
    }
    return 0;
}