int baza(int n,int b)
{
    while (n>0)
    {
        if (n%10>=b) return false;
        n/=10;
    }
    return true;
}