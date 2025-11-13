int cifmax(int nr)
{
    if (nr<=9)return nr;
    return nr%10>cifmax(nr/10) ? nr%10 : cifmax(nr/10);
}