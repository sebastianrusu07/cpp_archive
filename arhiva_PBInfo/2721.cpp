void Insert(int a[], int &n)
{
    int ni=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
            ni++;
        }
    }

    int cni=ni;
    for (int i=n-1;i>=0;i--)
    {
        if (a[i]%2==0)
        {
            a[cni+i]=a[i];
        }else
        {
            a[cni+i-1]=a[i];
            a[cni+i]=a[i]*2;
            cni--;
        }
    }
    n+=ni;
}