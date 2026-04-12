int FAB(int a[],int n,int b[],int m)
{
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        int st=0,dr=n-1;
        while(st<dr && a[st]+a[dr]!=b[i])
        {
            if (a[st]+a[dr]<b[i]) st++;
            else if (a[st]+a[dr]>b[i]) dr--;
        }
        if (st==dr) return 0;
    }
    return 1;
}