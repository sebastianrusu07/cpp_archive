void inserare(nod * & p, nod * q, int x)
{
    if (p == q)
    {
        nod *add = new nod;
        add->info = x;
        add->urm = p;
        p = add;
        return;
    }
    nod *curr = p;
    while (curr->urm != nullptr && curr->urm != q)
    {
        curr = curr->urm;
    }
    if (curr->urm == q)
    {
        nod *add = new nod;
        add->info = x;
        add->urm = q;
        curr->urm = add;
        return;
    }
}