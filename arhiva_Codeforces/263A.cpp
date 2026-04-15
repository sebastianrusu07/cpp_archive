#include <iostream>
using namespace std;

int main()
{
    int matrix[6][6];
    int posX=0, posY=0;
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            int nr;
            cin >> nr;
            if (nr==1)
            {
                posX=j;
                posY=i;
            }
            matrix[i][j]=nr;
        }
    }
    cout << abs(3-posX)+abs(3-posY);
    return 0;
}