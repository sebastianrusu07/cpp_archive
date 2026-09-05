void FRadical(int n, int &x, int &y)
{
    for (y=1; y<=n; y++)
    {
        if (n%y==0)
        {
            int xSquared = n/y;
            int res = sqrt(xSquared);
            if (res*res == xSquared)
            {
                x=res;
                return;
            }
        }
    }
}