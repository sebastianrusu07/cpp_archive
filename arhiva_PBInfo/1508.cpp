#include <climits>
int nr_sa(int a[100][100],int n,int m)
{
    int smallestPerRow[100];
    int biggestPerRow[100];
    int smallestPerColumn[100];
    int biggestPerColumn[100];


    for(int i=0;i<n;i++)
    {
        int smallest=INT_MAX;
        int biggest=INT_MIN;
        for(int j=0;j<m;j++)
        {
            smallest=min(smallest,a[i][j]);
            biggest=max(biggest,a[i][j]);
        }
        smallestPerRow[i]=smallest;
        biggestPerRow[i]=biggest;
    }
    for(int i=0;i<m;i++)
    {
        int smallest=INT_MAX;
        int biggest=INT_MIN;
        for(int j=0;j<n;j++)
        {
            smallest=min(smallest,a[j][i]);
            biggest=max(biggest,a[j][i]);
        }
        smallestPerColumn[i]=smallest;
        biggestPerColumn[i]=biggest;
    }

    int sa=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int nr = a[i][j];
            if ((smallestPerRow[i]==nr && biggestPerColumn[j]==nr) || (biggestPerRow[i]==nr && smallestPerColumn[j]==nr))
            {
                sa++;
            }
        }
    }
    return sa;
}