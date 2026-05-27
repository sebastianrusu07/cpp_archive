#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int a[51][51];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int optim=-1;
    for (int ri = 0; ri < n; ri++)
    {
        for (int rj = 0; rj < m; rj++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int dist=abs(ri-i)+abs(rj-j);
                    sum+=dist*a[i][j];
                }
            }
            if (optim==-1 || sum<optim)
            {
                optim=sum;
            }
        }
    }
    cout << optim;
    return 0;
}