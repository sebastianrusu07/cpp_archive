int Path(const char cale[], char d[101][101])
{
    int lineIdx=0,columnIdx=0;
    for (int idx=0;cale[idx]!='\0';idx++)
    {
        if (cale[idx]=='\\')
        {
            lineIdx++;
            columnIdx=0;
        }else
        {
            d[lineIdx][columnIdx]=cale[idx];
            columnIdx++;
        }
    }
    return lineIdx+1;
}