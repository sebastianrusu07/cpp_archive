int cmmdc(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

void parcele(int a,int b,int& p,int& l)
{
    l = cmmdc(a,b);
    p = a/l * (b/l);
}