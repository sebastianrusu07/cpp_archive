long long Phi(long long nr)
{
    long long d=2;
    double phi=nr;
    while (nr>1)
    {
        while (nr%d!=0 && d*d<=nr)
        {
            d++;
        }
        if (d*d>nr)
        {
            d=nr;
        }
        phi*=(1-(1.0/d));
        while (nr%d==0)
        {
            nr/=d;
        }
    }
    return phi;
}
