void P(int v[],int n,int &mini,int &maxi,int &sum)
{
    mini=99999;
    maxi=-99999;
    sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=v[i];
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
    }
}