int suma(int v[],int n,int i,int j)
{
    if (n==0) return 0;
    if (n>j || n<i)
    {
        return suma(v,n-1,i,j) + v[n];
    }
    return suma(v,n-1,i,j);
}