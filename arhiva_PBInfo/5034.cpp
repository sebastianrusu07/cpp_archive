void MatImp(int a[100][100], int n, int L[], int &k)
{
    k=0;
    for (int i = 0; i < n; i++)
    {
        int pare=0,impare=0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                pare++;
            }else
            {
                impare++;
            }
        }
        if (impare > pare)
        {
            L[k]=i;
            k++;
        }
    }
}