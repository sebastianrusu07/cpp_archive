int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int cmmmc(int a,int b)
{
    return (a*b)/cmmdc(a,b);
}

int depozit(int a,int b,int c)
{
    return cmmmc(cmmmc(a,b),c);
}