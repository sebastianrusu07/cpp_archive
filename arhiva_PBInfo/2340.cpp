int* sumaMinMax(int arr[101],int n)
{
    int smallest=51,biggest=0,sum=0;
    for(int i=0;i<n;i++)
    {
        smallest=min(smallest,arr[i]);
        biggest=max(biggest,arr[i]);
        sum+=arr[i];
    }
    int* res = new int[2];
    res[1]=sum-smallest;
    res[0]=sum-biggest;
    return res;
}