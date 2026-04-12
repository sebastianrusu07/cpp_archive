
int NrZero(int a[], int n)
{
    int st=1,dr=n,mid,left=-1,right=-1;
    while (st<=dr)
    {
        mid=(st+dr)/2;
        if (a[mid]%2==0)
        {
            if (a[mid]==0)
            {
                left=mid;
            }
            dr=mid-1;
        }else
        {
            st=mid+1;
        }
    }
    if (left==-1) return 0;

    st=1,dr=n;
    while (st<=dr)
    {
        mid=(st+dr)/2;
        if (a[mid]%2==0)
        {
            if (a[mid]==0)
            {
                right=mid;
                st=mid+1;
            }else
            {
                dr=mid-1;
            }
        }else
        {
            st=mid+1;
        }
    }
    return right-left+1;
}