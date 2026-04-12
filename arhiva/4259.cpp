int PalRec(int a[], int st, int dr)
{
    if (st>=dr) return 1;
    if (a[st]!=a[dr]) return 0;
    st++;
    dr--;
    return PalRec(a,st,dr);
}
