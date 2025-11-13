void cifmaxmin(int nr,int &mare,int &mic)
{
    if (nr<=9)
    {
        mare=nr;
        mic=nr;
        return;
    }
    cifmaxmin(nr/10,mare,mic);
    if (mare<nr%10)mare=nr%10;
    if (mic>nr%10)mic=nr%10;
}
