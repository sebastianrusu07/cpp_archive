int ImparPar(int n)
{
    int impar=0,par=0;
    int imparNext=1,parNext=1;
    while (n>0)
    {
        int c=n%10;
        if (c%2!=0)
        {
            impar+=c*imparNext;
            imparNext*=10;
        }else
        {
            par+=c*parNext;
            parNext*=10;
        }
        n/=10;
    }
    return parNext*impar+par;
}