int FGreater(int a[], int n, int x)
{
    int smallestOk=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]<=x) continue;
        if (smallestOk == -1)
        {
            smallestOk = a[i];
            continue;
        }
        smallestOk=min(smallestOk,a[i]);
    }
    return smallestOk;
}