int ElimZTRec(int nr)
{
    if (nr%10!=0)return nr;
    return (nr%10==0) ? ElimZTRec(nr/10) : nr;
}