int DifParImpar(int nr)
{
    if (nr<=9)return nr%2==0?1:-1;
    return (nr%10%2==0?1:-1) + (DifParImpar(nr/10)) ;
}