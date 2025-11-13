int cifmin(int nr)
{
    if (nr<=9)return nr;
    return nr%10<cifmin(nr/10) ? nr%10 : cifmin(nr/10);
}