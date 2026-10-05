int suma(nod * p)
{
    int res = 0;

    nod *prev = p;
    nod *curr = p->urm;
    nod *next = curr->urm;

    while (next != NULL)
    {
        if (curr->info%2!=0 && prev->info%2==0 && next->info%2==0)
        {
            res += curr->info;
        }
        next = next->urm;
        curr = curr->urm;
        prev = prev->urm;
    }
}