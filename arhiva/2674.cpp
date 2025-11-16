int IncDecRec(int nr)
{
    if (nr<=9)
    {
        if (nr%2==0)return nr+1;
        return nr-1;
    }

    int rest = IncDecRec(nr/10);
    int c = nr%10;
    if (c%2==0)c++;
    else c--;
    return rest*10+c;
}