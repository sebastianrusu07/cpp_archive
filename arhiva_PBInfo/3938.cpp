void generatoare(int n)
{
    bool ok=false;
    for (int i = 2; i <= n/2; i+=2)
    {
        int pair = n/i;
        if (i*pair + int(i/pair)==n)
        {
            cout << i << '-' << pair << ' ';
            ok = true;
        }
    }

    if (n%2 == 0 && ((n / 2) % 2 == 0))
    {
        cout << n/2 << "-1";
        ok = true;
    }

    if (!ok)
    {
        cout << "nu exista";
    }
}