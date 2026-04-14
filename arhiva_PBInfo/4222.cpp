int CautaPoz(int a[], int n)
{
    int s[n+5];
    s[0] = a[0];
    for(int i=1; i<n; i++)
    {
        s[i] = s[i-1] + a[i];
    }
    int p=0,sp=abs(s[n-1]);
    for (int i=1;i<n-1;i++)
    {
        int s1 = s[i];
        int s2 = s[n-1]-s[i];
        if (abs(s1-s2)<sp)
        {
            sp=abs(s1-s2);
            p=i;
        }
    }
    return p;
}