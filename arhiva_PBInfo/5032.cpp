
void FMatrixCol(int a[50][50], int n, int m)
{
    for (int col=0; col<m; col++)
    {
        int mini=99999999,pos=-1;
        for (int row=0; row<n; row++)
        {
            if (a[row][col]<mini)
            {
                mini=a[row][col];
                pos=row;
            }
        }
        if (mini%2==0)
        {
            swap(a[pos][col],a[0][col]);
        }else
        {
            swap(a[pos][col],a[n-1][col]);
        }
    }
}