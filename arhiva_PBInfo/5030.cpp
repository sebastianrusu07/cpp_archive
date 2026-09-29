void moda(int n,int& pc)
{
    pc=0;
    while (n>0)
    {
        if(n%2==0)
        {
            pc=1;
        }else
        {
            pc++;
        }
        n/=10;
    }
}