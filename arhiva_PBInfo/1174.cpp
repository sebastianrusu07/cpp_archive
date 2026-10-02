int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int numarare(nod* p)
{
    nod* i = p;
    int pairs=0;
    while (i!=NULL)
    {
        nod* j = i->urm;
        while (j!=NULL)
        {
            if (cmmdc(i->info,j->info)==1)
            {
                pairs++;
            }
            j=j->urm;
        }
        i=i->urm;
    }
    return pairs;
}