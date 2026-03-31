void zero(int n, int v[])
{
    vector<int> pari,impari;
    for(int i=1;i<=2*n;i++)
    {
        v[i]%2==0 ? pari.push_back(v[i]):impari.push_back(v[i]);
    }
    for (int i=1;i<=n;i++)
    {
        v[2*i]=pari[i-1];
        v[2*i-1]=impari[i-1];
    }
}