void num(int n,int x[])
{
    if (n==-1)
    {
        return;
    }
    if (x[n-1]<=x[0])
    {
        x[n-1]=0;
    }
    num(n-1,x);
}