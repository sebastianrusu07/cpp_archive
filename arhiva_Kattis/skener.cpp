#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int x,y,xk,yk;
    cin >> x >> y >> xk >> yk;

    char matrix[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int K=0;K<xk;K++)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < yk; k++)
                {
                    cout << matrix[i][j];
                }
            }
            cout << '\n';
        }
    }
    return 0;
}