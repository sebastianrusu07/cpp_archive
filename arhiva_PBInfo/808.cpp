void sub(int n,int v[],int x)
{
    int xCount=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==x) xCount++;
    }

    int sorted[n];
    for (int i=0;i<xCount;i++)
    {
        sorted[i]=x;
    }
    int it=xCount;
    for (int i=0;i<n;i++)
    {
        if (v[i]!=x)
        {
            sorted[it]=v[i];
            it++;
        }
    }
    for (int i=0;i<n;i++)
    {
        v[i]=sorted[i];
    }
}