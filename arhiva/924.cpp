int multiplu(int v[],int n,int k)
{
    if (n==1)return (v[0]%k==0 && v[0]%10==k);
    return (v[n-1]%k==0 && v[n-1]%10==k) + multiplu(v,n-1,k);
}