long long nroot(int a,long long b)
{
    if(b == 0)return 0;
    if (b<0)b=-b;
    float exp = double(1)/a;
    return pow(b,exp);
}