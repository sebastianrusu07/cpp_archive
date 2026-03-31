bool isPerfect(int nr)
{
    int sumDiv=-nr;
    for (int i=1; i*i<=nr; i++)
    {
        if (nr%i==0)
        {
            sumDiv+=i;
            if (i*i!=nr)
            {
                sumDiv+=nr/i;
            }
        }
    }
    return sumDiv==nr;
}

void perfect(int a,int b)
{
    bool blaBlaBla=false;
    for (int i=b;i>=a;i--)
    {
        if (isPerfect(i))
        {
            cout << i << ' ';
            blaBlaBla=true;
        }
    }
    if (!blaBlaBla) cout << "nu exista";
}