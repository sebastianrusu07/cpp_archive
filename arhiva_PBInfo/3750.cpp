void InserareInainteQ(nod *& prim, nod *& ultim, nod * q, int x)
{
    nod* add = new nod;
    add->info = x;
    add->ant = add->urm = nullptr;

    if(q == nullptr)
    {
        prim = ultim = add;
        return;
    }

    if (q == prim)
    {
        prim->ant = add;
        add->urm = prim;
        prim = add;
        return;
    }

    add->ant = q->ant;
    add->urm = q;
    q->ant->urm = add;
    q->ant = add;
}