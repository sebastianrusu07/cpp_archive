int cifmaxpar(int nr)
{
    if (nr<=9)
    {
        if (nr%2!=0)return -1;
        return nr;
    }
    return nr%10%2==0? (cifmaxpar(nr/10)==-1 ||nr%10 > cifmaxpar(nr/10)? nr%10 : cifmaxpar(nr/10)) : cifmaxpar(nr/10);
}