int AlternDivImp(int a[], int st, int dr)
{
    for (int i = st; i < dr; i++)
    {
        if (a[i]%2 == a[i+1]%2) return 0;
    }
    return 1;
}