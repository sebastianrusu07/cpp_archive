#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int n;
    cin>>n;

    n--;
    double x,y;
    cin>>x>>y;

    for(int i=0;i<n;i++)
    {
        string dir;
        double len;
        cin>>dir>>len;

        if (dir.size()==1)
        {
            if (dir[0]=='N')
            {
                y+=len;
            }else if (dir[0]=='E')
            {
                x+=len;
            }else if (dir[0]=='S')
            {
                y-=len;
            }else
            {
                x-=len;
            }
        }else
        {
            double nonDiagonal = sqrt(len*len/2.0);
            if (dir=="NE")
            {
                y+=nonDiagonal;
                x+=nonDiagonal;
            }else if (dir=="SE")
            {
                y-=nonDiagonal;
                x+=nonDiagonal;
            }else if (dir=="SW")
            {
                y-=nonDiagonal;
                x-=nonDiagonal;
            }else
            {
                y+=nonDiagonal;
                x-=nonDiagonal;
            }
        }
    }
    cout << fixed << setprecision(7) << x << ' ' << y;
    return 0;
}