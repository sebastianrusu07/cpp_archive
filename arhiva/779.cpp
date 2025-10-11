#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;
    int matrice[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrice[i][j];
        }
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            bool sus=true,jos=true,stanga=true,dreapta=true;
            if (i==0)
            {
                sus=false;
            }
            if (i==n-1)
            {
                jos=false;
            }
            if (j==0)
            {
                stanga=false;
            }
            if (j==m-1)
            {
                dreapta=false;
            }
            if (!sus || sus && matrice[i-1][j]%2==0)
            {
                if (!jos || jos && matrice[i+1][j]%2==0)
                {
                    if (!stanga || stanga && matrice[i][j-1]%2==0)
                    {
                        if(!dreapta || dreapta && matrice[i][j+1]%2==0)
                        {
                            counter++;
                        }
                    }
                }
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}

