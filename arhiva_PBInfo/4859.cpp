int CautaKth(int vec[],int n,int k)
{
    int cnt=0,i=1,vecPos=0;
    for (;cnt<k && vecPos < n;i++)
    {
        if (vec[vecPos]!=i)
        {
            cnt++;
        }else
        {
            vecPos++;
        }
    }
    if (cnt==k)return i-1;
    return i+(k-cnt)-1;
}