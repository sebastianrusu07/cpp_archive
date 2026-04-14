int bitcmp(int a,int b)
{
    int d = a-b;
    int sign = d >> 31;

    int equal1=a-b,equal2=b-a;
    if (!equal1)
    {
        if (!equal2)
        {
            return 0;
        }
    }

    return sign+1?1:-1;
}