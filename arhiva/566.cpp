#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int matrix[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int mese=0,largest=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if (matrix[i][j]==1)
            {
                int lenX=1, lenY=1;
                mese++;
                int check=1;
                while (matrix[i][j+check]==1)
                {
                    lenX++;
                    matrix[i][j+check]=2;
                    check++;
                }
                int len=check;
                check=1;
                while (matrix[i+check][j]==1)
                {
                    lenY++;
                    matrix[i+check][j]=2;
                    for (int k=0;k<len;k++)
                    {
                        matrix[i+check][j+k]=2;
                    }
                    check++;
                }
                int surface = lenX*lenY;
                if (surface > largest) largest=surface;
            }
        }
    }

    cout << mese << " " << largest << endl;
    return 0;
}